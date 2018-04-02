#include "BinaryExpression.h"

#include "AutoConst.h"

BinaryExpression::BinaryExpression(Expression *left, Operator op1, Expression *right,Node* parent):Expression(parent)
{
	this->left = left; 
	this->right = right; 
	op = op1;
	cout << "===========" << endl;
	left->print(0);
	cout << op << endl
		;right->print(0);
	cout << "========" << endl;
}

BinaryExpression::~BinaryExpression()
{
}
