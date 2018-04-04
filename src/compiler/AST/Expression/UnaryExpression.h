#pragma once
#include "Expression.h"
class UnaryExpression :
	public Expression
{
private:
	Operator op;
	Expression *expression;
public:
	UnaryExpression(Operator op, Expression *expression, Node* parent);
	 string getType();

	 void print(int level);
	~UnaryExpression();
};

