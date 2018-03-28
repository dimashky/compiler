#pragma once
#include "Expression.h"
class UnaryExpression :
	public Expression
{
private:
	Operator op;
	Expression *expression;
public:
	UnaryExpression();
	UnaryExpression(Operator op, Expression *expression);
	~UnaryExpression();
};

