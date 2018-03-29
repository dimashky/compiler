#include "UnaryExpression.h"


UnaryExpression::UnaryExpression(Operator op, Expression *expression)
{
	this->op = op; 
	this->expression = expression; 
}

UnaryExpression::~UnaryExpression()
{
}
