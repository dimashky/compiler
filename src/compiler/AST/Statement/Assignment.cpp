#include "Assignment.h"

Assignment::Assignment(Object *left, Operator op, Node *right, Node *parent) :Statement(parent)
{
	this->left = left; 
	this->right = right;
	this->op = op;

	cout << "===============" << endl;
	cout << left->symbol->getName() << endl;
	cout << op << endl;
	cout << "=============" << endl;
}
Assignment::~Assignment()
{
}
