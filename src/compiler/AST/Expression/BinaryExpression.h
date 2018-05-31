#pragma once
#include "Expression.h"
class BinaryExpression : public Expression
{
private:
	Node *left, *right;
	bool knownTypeAsBinaryExpression;
public:
	Operator op;

	BinaryExpression(Node *left, Operator op, Node *right, Node* parent, bool knownTypeAsBinaryExpression = false);

	string getType();

	int print(int);

	bool typeChecking();
	void generateCode();

	~BinaryExpression();
};

