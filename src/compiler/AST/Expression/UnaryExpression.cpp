#include "UnaryExpression.h"



UnaryExpression::UnaryExpression()
{
}

UnaryExpression::UnaryExpression(Operator op1, Expression *expression)
{
	op = op1; 
	this->expression = expression; 
}

UnaryExpression::~UnaryExpression()
{
}
