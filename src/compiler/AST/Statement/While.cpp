#include "While.h"

While::While()
{
}
While::While(Expression *condition, Statement *statement)
{
	this->condition = condition; 
	this->statement = statement; 
}
While::~While()
{
}
