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
	return check || true;
}

Procedure::~Procedure()
{

}