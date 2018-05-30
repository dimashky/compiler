#include "Jump.h"
#include "../Object/Procedure.h"
#include "../Statement/While.h"

Jump::Jump(Node* statement, JumpStatement jumpStatement, Node* parent, int lineNo) :Statement(parent)
{
	this->statement = statement;
	this->jumpStatement = jumpStatement;
	this->lineNo = lineNo;
	parentLoop = nullptr;
	
	Node* currentNode = parent;
	while (currentNode->getType() != "procedure") {
		if (this->jumpStatement == JumpStatement::Break || this->jumpStatement == JumpStatement::Continue) {
			if (!parentLoop && (currentNode->getType() == "while" || currentNode->getType() == "dowhile" || currentNode->getType() == "for")) {
				parentLoop = (Loop*)currentNode;
				break;
			}
		}
		currentNode = currentNode->getParent();
	}
	if (this->jumpStatement == JumpStatement::Return) {
		this->parentMethod = (Procedure*)currentNode;
		((Procedure*)parentMethod)->setHasReturn(true);
	}
}



int Jump::print(int nodeCnt) {
	return nodeCnt;
}

string Jump::getType() {
	return "jump";
}

bool Jump::typeChecking() {

	/*
	*	TODO : we should handle throw exception here !!s
	*/

	if (this->jumpStatement == JumpStatement::Return) {

		Method *method = (Method*)((Procedure*)parentMethod)->getSymbol();

		if (this->statement != nullptr) {

			this->statement->typeChecking();

			//function return primitiveType

			if (method->getTypeRef() == nullptr) {
				TypeExpression* typeExpression = TypesTable::getType(method->get_return_type()).first;
				if (!typeExpression->equivelantTo(this->statement->nodeType, false)) {
					this->nodeType = new TypeError("error in return statement no suitable type", this->lineNo);
					return false;
				}
			}
			else {
				TypeExpression* typeExpression = TypesTable::findOrCreate(((Class*)method->getTypeRef())->getFullPath(), method->getTypeRef());
				if (! typeExpression->equivelantTo(this->statement->nodeType, false)) {
					this->nodeType = new TypeError("error in return statement no suitable type", this->lineNo);
					return false;
				}
			}
		}
		else {
			if (method->getTypeRef() != nullptr || method->get_return_type() != "VOID") {
				this->nodeType = new TypeError("error in return statement no suitable type", this->lineNo);
				return false;
			}
		}
	}
	return true;
}

void Jump::generateCode() {		
		if (jumpStatement == JumpStatement::Return) {
			Method* method = (Method*)((Procedure*)parentMethod)->getSymbol();
			if (method == symbolTable::mainRef) {
				string labelName = ((Procedure*)((Method*)symbolTable::mainRef)->astPosition->getParent())->getFullPath() + "." + symbolTable::mainRef->getFullPath() + "_exit";
				AsmGenerator::addInstruction("beq $0, $0 " + labelName);
				return;
			}
			if (statement) {
				statement->generateCode();

				if (statement->getType() == "call") {
					AsmGenerator::lw("t0", "sp", 0);
				}
				else {
					AsmGenerator::pop("t0");
				}
				AsmGenerator::sw("t0", "fp", 0);
			}
			
			AsmGenerator::lw("ra", "fp", -1 * method->returnAddressOffset);
			AsmGenerator::lw("fp", "fp", -1 * (method->returnAddressOffset + 4));

			AsmGenerator::addInstruction("add $sp, $sp, " + to_string(method->stackFrameSize));
			
			AsmGenerator::addInstruction("jr $ra");
		}
		else if (jumpStatement == JumpStatement::Break) {
			AsmGenerator::addInstruction("beq $0, $0 label" + to_string(parentLoop->exitLabel));
		}
		else if (jumpStatement == JumpStatement::Continue) {
			AsmGenerator::addInstruction("beq $0, $0 label" + to_string(parentLoop->startLabel));
		}
}

Jump::~Jump()
{
}
