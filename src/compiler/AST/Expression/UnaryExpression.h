#pragma once
#include "Expression.h"
class UnaryExpression :
	public Expression
{
private:

	Operator op;

	Node *expression;

public:
	
	UnaryExpression(Operator op, Node *expression, Node* parent);
	
	int print(int);

	string getType();
	
	bool typeChecking();
	void generateCode();

	~UnaryExpression();
};

