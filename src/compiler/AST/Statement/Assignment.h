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
			left->typeChecking();
		}
		if (right) {
			right->typeChecking();
		}
		if (left && right) {
		//	this->nodeType = left->nodeType->operation(Operator::Equal, right->nodeType);
			return true;
		}
		
		this->nodeType = new TypeError("invalid assignment operation");
		return false;
	}

	~Assignment();
};

