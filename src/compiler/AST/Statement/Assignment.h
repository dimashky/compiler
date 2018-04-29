#pragma once
#include "Statement.h"
#include "../Expression/Identifier.h"
#include "../Expression/Expression.h"
class Assignment :public Statement
{

private:

	Identifier *left;

	Node *right;

	Operator op;

public:
	Assignment(Identifier *left, Operator op, Node *right, Node* parent);

	int print(int);

	string getType();

	bool typeChecking() { 
		if (left) {

			Identifier::leftAssignment = true;
			Identifier::isAssigned = true;
			left->typeChecking();
			
			if (left->getType() == "identifier") {
				if (((Identifier*)left)->getPreDot() != nullptr) {
					new TypeError("Warning for using Dot operator in unassigned variable");
				}
			}

			Identifier::leftAssignment = false;

		}
		if (right) {
			right->typeChecking();
		}
		if (left && right && left->nodeType->getTypeId() == right->nodeType->getTypeId()) {
			this->nodeType = left->nodeType->operation(Operator::Equal, right->nodeType);
			if (this->nodeType->getTypeId() != TYPE_ERROR)
				return true;
		}
		
		this->nodeType = new TypeError("invalid assignment operation");
		return false;
	}

	~Assignment();
};

