#include "Assignment.h"

Assignment::Assignment(Identifier *left, Operator op, Node *right, Node *parent) :Statement(parent)
{
	this->left = left; 
	this->right = right;
	this->op = op;
}

string Assignment::getType() {
	return "assignment";
}

void Assignment::print(int level) {

	cout << op << endl;

	left->print(level + 1);
	right->print(level + 1);
}
Assignment::~Assignment()
{
}
