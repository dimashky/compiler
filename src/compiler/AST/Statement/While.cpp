#include "While.h"

While::While(Expression *condition, Statement *statement,Node *parent) :Statement(parent)
{
	this->condition = condition; 
	this->statement = statement; 
}
While::~While()
{
}
