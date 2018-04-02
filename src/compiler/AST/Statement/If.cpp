#include "If.h"

If::If(Expression *codnition, Statement *statement , Node *parent) :Statement(parent)
{
	this->codnition = codnition; 
	this->statement = statement;
}

If::~If()
{
}
