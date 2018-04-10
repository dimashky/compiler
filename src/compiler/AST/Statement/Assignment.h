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

	~Assignment();
};

