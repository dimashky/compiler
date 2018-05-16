#pragma once
#include "Expression.h"
class BinaryExpression : public Expression
{
private:
	Operator op;
	Node *left, *right;
	bool knownTypeAsBinaryExpression;
public:
	BinaryExpression(Node *left, Operator op, Node *right, Node* parent, bool knownTypeAsBinaryExpression = false);

	string getType();

	int print(int);

	bool typeChecking();

	~BinaryExpression();
};

