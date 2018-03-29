#include "BinaryExpression.h"



BinaryExpression::BinaryExpression(Expression *left, Operator op1, Expression *right)
{
	this->left = left; 
	this->right = right; 
	op = op1; 
}

BinaryExpression::~BinaryExpression()
{
}
