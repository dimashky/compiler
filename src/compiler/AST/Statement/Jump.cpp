#include "Jump.h"
#include "../Object/Procedure.h"
Jump::Jump(Node* statement, JumpStatement jumpStatement, Node* parent, int lineNo) :Statement(parent)
{
	this->statement = statement;
	this->jumpStatement = jumpStatement;
	this->lineNo = lineNo;

	Node* currentNode = parent;

	while (currentNode->getType() != "procedure")
		currentNode = currentNode->getParent();
	this->parentMethod = (Procedure*)currentNode;
	((Procedure*)parentMethod)->setHasReturn(true);
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


Jump::~Jump()
{
}
