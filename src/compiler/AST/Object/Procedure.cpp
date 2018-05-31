#include"Procedure.h"
#include "../../Type Checker/all.h"
#include "../Statement/Call.h"
#include "../../Error Handler/error_handler.h"

extern errorHandler error_handler;
Procedure::Procedure(Symbol* symbol, Node* parent, Node* baseCall):Object(symbol, parent)
{
	this->block = nullptr;
	this->hasReturnStatement = false;
	this->baseCall = baseCall;
	if (baseCall)
		baseCall->setParent(this);
	if (this->symbol && this->symbol->getType() == "method") {
		((Method*)this->symbol)->astPosition = this;
	}
	/*
	 *	TODO: init nodeType with symbol table.
	 */
}

void Procedure::add(Object* object)
{
	locals.push_back(object);
	return;
}

bool Procedure::getHasReturn() {
	return hasReturnStatement;
}

void Procedure::setHasReturn(bool hasReturnStatement) {
	this->hasReturnStatement = hasReturnStatement;
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
	if (symbol != nullptr && symbol->getType() == "class" && symbol->getName() == "object")
		return true;

	if (symbol != nullptr && symbol->getType() == "class") {
		((Class*)symbol)->refactor();
	}
	//start handeling warning for override keyword

	if (symbol != nullptr && this->symbol->getType() == "method" && !((Method*)this->symbol)->get_is_override()) {
		if (!((Method*)symbol)->get_is_override()) {
			if (symbolTable::checkMethodOverriding(symbol, ((Procedure*)this->parent)->symbol)) {
				error_handler.add(error(symbol->getLineNo(), symbol->getColNo(), "Warning override method without using override keyword"));
			}
		}

	}
	//end handeling warning for override keyword


	if (symbol && symbol->getType() == "method") {
		Identifier::isStaticMethod = ((Method*)symbol)->get_is_static();
	}


	//start handeling call parent constructer
	if (baseCall) {
		((Call*)baseCall)->updateParamsSymboltableRef(this->symboltable);
		baseCall->typeChecking();
		if (baseCall->nodeType->getTypeId() == TYPE_ERROR) {
			this->nodeType = new TypeError("no suitable constructer in base class", this->symbol->getLineNo());
		}
	}
	else if (symbol != nullptr && symbol->getType() == "method" && ((Method*)symbol)->get_is_constructer()) {
		baseCall = new Call(new Identifier(nullptr, new Symbol("base", symbol->getLineNo(), -13)), this->parent, false, false, true);
		((Call*)baseCall)->setSymbolTable(this->symboltable);
		baseCall->typeChecking();
		((Call*)baseCall)->new_expression = true;

		if (baseCall->nodeType->getTypeId() == TYPE_ERROR) {
			this->nodeType = new TypeError("no suitable constructer in base class", this->symbol->getLineNo());
		}
	}
	//end handeling call parent constructer



	bool check = true;
	for (int i = 0; i < locals.size(); i++) {
		check |= locals[i]->typeChecking();
	}
	if (block) {
		check |= block->typeChecking();
	}
	Identifier::isStaticMethod = false;
	return check || true;
}

void Procedure::generateCode() {
	// function
	if (this->symbol && this->symbol->getType() == "method" && block) {
		bool isReadFunction = false;

		AsmGenerator::comment("\n function declaration <" + this->symbol->getName() +">\n\n");
		AsmGenerator::addLabel(this->getFullPath());

		// store current $ra in new AR
		AsmGenerator::sw("ra", "fp", -1 * (((Method*)this->symbol)->returnAddressOffset));

		if (((Method*)symbol)->get_is_constructer() && baseCall) {
			string baseCallDispatchTable = ((Procedure*)((Call*)baseCall)->calledMethod->astPosition->getParent())->getFullPath() + "_DispatchTable";
			string currentDsipatchTable = ((Procedure*)this->getParent())->getFullPath() + "_DispatchTable";
			
			AsmGenerator::lw("t0", "fp", -4);	// load this
			AsmGenerator::addInstruction("la $t1, " + baseCallDispatchTable);
			AsmGenerator::sw("t1", "t0", 0);	// store base dispatch table pointer

			((Call*)baseCall)->new_expression = false;
			((Call*)baseCall)->isBaseCall = true;
			baseCall->generateCode();

			AsmGenerator::lw("t0", "fp", -4);	// load this
			AsmGenerator::addInstruction("la $t1, " + currentDsipatchTable);
			AsmGenerator::sw("t1", "t0", 0);	// store new dispatch table pointer
		}

		if (((Method*)symbol)->getFullPath() == "write_INT") {
			AsmGenerator::lw("t0", "fp", -8);
			AsmGenerator::printReg("t0");
		}

		if (((Method*)symbol)->getFullPath() == "write_STRING") {
			AsmGenerator::lw("a0", "fp", -8);
			AsmGenerator::systemCall(4);
		}

		if (((Method*)symbol)->getFullPath() == "readInt") {
			AsmGenerator::systemCall(5);
			AsmGenerator::sw("v0", "fp", 0);
			isReadFunction = true;
		}

		if (((Method*)symbol)->getFullPath() == "readString") {
			AsmGenerator::addInstruction("la $a0, buffer");
			AsmGenerator::li("a1", 20);
			AsmGenerator::systemCall(8);
			AsmGenerator::sw("a0", "fp", 0);
			isReadFunction = true;
		}

		if (!isReadFunction) {
			AsmGenerator::comment("BEFFFFFFFFFFFFFFFFOR");
			block->generateCode();
			AsmGenerator::comment("AFTTTTTER");
		}
		if (this->symbol->getName() == "Main") {
			AsmGenerator::systemCall(10);
			return;
		}
		

		AsmGenerator::lw("ra", "fp", -1 * ((Method*)this->symbol)->returnAddressOffset);
		AsmGenerator::lw("fp", "fp", -1 * (((Method*)this->symbol)->returnAddressOffset + 4));
		AsmGenerator::addInstruction("add $sp, $sp, " + to_string(((Method*)this->symbol)->stackFrameSize));

		AsmGenerator::addInstruction("jr $ra");
	}
	// class
	else {
		for (auto local : this->locals) {
			local->generateCode();
		}
	}
}

Procedure::~Procedure()
{

}