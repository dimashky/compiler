#include "BinaryExpression.h"

#include "AutoConst.h"

BinaryExpression::BinaryExpression(Expression *left, Operator op1, Expression *right,Node* parent):Expression(parent)
{
	this->left = left; 
	this->right = right; 
	op = op1;
}

BinaryExpression::~BinaryExpression()
{
}
