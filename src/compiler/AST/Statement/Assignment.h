#pragma once
#include "Statement.h"
#include "../Expression/Identifier.h"
#include "../Expression/Expression.h"
class Assignment :public Statement
{
	Identifier *left;
	Node *right;
	Operator op;
public:
	Assignment(Identifier *left, Operator op, Node *right, Node* parent);

	string getType();

	int print(int);

	~Assignment();
};

