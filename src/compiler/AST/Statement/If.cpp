#include "If.h"
If::If()
{
}
If::If(Expression *codnition, Statement *statement)
{
	this->codnition = codnition; 
	this->statement = statement;
}

If::~If()
{
}
