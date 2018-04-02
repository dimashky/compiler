#include "UnaryExpression.h"
#include "Identifier.h"


UnaryExpression::UnaryExpression(Operator op, Expression *expression, Node* parent):Expression(parent)
{
	this->op = op; 
	this->expression = expression;
}

UnaryExpression::~UnaryExpression()
{
}
