#pragma once
#include "Expression.h"
class BinaryExpression : public Expression
{
	Operator op;
	Node *left, *right;
public:
	BinaryExpression(Node *left, Operator op, Node *right, Node* parent);
	~BinaryExpression();
	string getType();

	int print(int);
};

