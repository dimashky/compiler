#include "Assignment.h"

Assignment::Assignment(Object *left, Expression *right, Node *parent) :Statement(parent)
{
	this->left = left; 
	this->right = right;
}
Assignment::~Assignment()
{
}
