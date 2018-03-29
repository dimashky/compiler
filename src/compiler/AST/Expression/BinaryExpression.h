#pragma once
#include "Expression.h"
class BinaryExpression : public Expression
{
	Operator op;
	Expression *left, *right;
public:
	BinaryExpression(Expression *left, Operator op, Expression *right);
	~BinaryExpression();
};

