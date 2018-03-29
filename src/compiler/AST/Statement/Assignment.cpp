#include "Assignment.h"

Assignment::Assignment(Object *left, Expression *right)
{
	this->left = left; 
	this->right = right;
}
Assignment::~Assignment()
{
}
