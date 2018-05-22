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
	
	string getType();

	int print(int);
	
	bool typeChecking();
	void generateCode();

	~UnaryExpression();
};

