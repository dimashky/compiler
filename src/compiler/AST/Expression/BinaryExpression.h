#pragma once
#include "Expression.h"
class BinaryExpression : public Expression
{
private:

	Operator op;

	Node *left, *right;

public:

	BinaryExpression(Node *left, Operator op, Node *right, Node* parent);

	string getType();

	int print(int);

	bool typeChecking();
	void generateCode();

	~BinaryExpression();
};

