#include "BinaryExpression.h"

#include "AutoConst.h"

BinaryExpression::BinaryExpression(Expression *left, Operator op1, Expression *right,Node* parent):Expression(parent)
{
	this->left = left; 
	this->right = right; 
	op = op1;
}


string BinaryExpression::getType() {
	return "bexpression";
}

void BinaryExpression::print(int level) {

	cout << op << endl;

	left->print(level + 1);
	right->print(level + 1);
}

BinaryExpression::~BinaryExpression()
{
}
