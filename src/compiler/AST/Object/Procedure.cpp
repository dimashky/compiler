#include"Procedure.h"
#include "../../Type Checker/all.h"
#include "../Statement/Call.h"
Procedure::Procedure(Symbol* symbol, Node* parent, Node* baseCall):Object(symbol, parent)
{
	this->block = nullptr;
	this->hasReturnStatement = false;
	this->baseCall = baseCall;
}

void Procedure::add(Object* object)
{
	locals.push_back(object);
	return;
}

int Procedure::print(int nodeCnt)
{
	int currentId = nodeCnt;
	if (this->symbol != nullptr)
		fprintf(nodesFile, "{ id:%d, label:'%s', shape: 'box', color:'#74bffc'},", currentId, this->symbol->getName().c_str());
	else
		fprintf(nodesFile, "{ id:%d, label:'Global Namespace', shape: 'box', color:'#74bffc'},", nodeCnt);

	for (int i = 0; i < locals.size(); i++) {
		fprintf(edgesFile, "{from:%d, to:%d, dashes:true},", currentId, nodeCnt + 1);
		nodeCnt = locals[i]->print(nodeCnt + 1);
	}
	if (block) {
		fprintf(edgesFile, "{from:%d, to:%d, dashes:true},", currentId, nodeCnt + 1);
		nodeCnt = block->print(nodeCnt + 1);
	}

	return nodeCnt;
}

Block* Procedure::getBlock()
{
	return this->block;
}

void Procedure::setBlock(Block* block)
{
	this->block = block;
}

string Procedure::getType()
{
	return "procedure";
}


bool Procedure::typeChecking() {
	
	if (symbol && symbol->getType() == "method") {
		Identifier::isStaticMethod = ((Method*)symbol)->get_is_static();
	}

	if (baseCall) {
		baseCall->typeChecking();
		if (baseCall->nodeType->getTypeId() == TYPE_ERROR) {
			this->nodeType = new TypeError("no suitable constructer in base class", this->symbol->getLineNo());
		}
	}
	else if(symbol != nullptr && symbol->getType() == "method" && ((Method*)symbol)->get_is_constructer()) {
		baseCall = new Call(new Identifier(nullptr, new Symbol("base", symbol->getLineNo(), -13)), this->parent, false, false, true);
		((Call*)baseCall)->setSymbolTable(this->symboltable);
		baseCall->typeChecking();
		if (baseCall->nodeType->getTypeId() == TYPE_ERROR) {
			this->nodeType = new TypeError("no suitable constructer in base class", this->symbol->getLineNo());
		}
	}
	bool check = true;
	for (int i = 0; i < locals.size(); i++) {
		check |= locals[i]->typeChecking();
	}
	if (block) {
		check |= block->typeChecking();
	}
	Identifier::isStaticMethod = false;
	return check;
}

void Procedure::generateCode() {
	// function
	if (block) {
		AsmGenerator::addInstruction("\n");
		AsmGenerator::addLabel(this->symbol->getName()); /// Change from get name to get FULL name
		// store current $ra in new AR
		if (this->symbol->getName() != "Main") {
			AsmGenerator::sw("ra", "fp", -1 * (((Method*)this->symbol)->returnAddressOffset));
			block->generateCode();
			AsmGenerator::lw("ra", "fp", -1 * ((Method*)this->symbol)->returnAddressOffset);
			AsmGenerator::lw("fp", "fp", -1 * (((Method*)this->symbol)->returnAddressOffset + 4));
			AsmGenerator::addInstruction("add $sp, $sp, " + to_string(((Method*)this->symbol)->stackFrameSize));

			AsmGenerator::lw("t0", "sp", 0);
			AsmGenerator::push("t0");

			AsmGenerator::addInstruction("jr $ra");
		}
		else {
			block->generateCode();
			AsmGenerator::systemCall(10);
		}
		AsmGenerator::addInstruction("\n");
	}
	// class
	else {
		for (auto local : this->locals) {
			if (local->getType() == "variable") {
				((Variable*)local)->getSymbol()->offset = ((Class*)symbol)->bytes;
				((Class*)symbol)->bytes += 4;
			}
			local->generateCode();
		}
	}
}

Procedure::~Procedure()
{

}