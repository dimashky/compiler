#include "Call.h"

Call::Call(Symbol *symbol,Node *parent) :Statement(parent)
{
	this->symbol = symbol;
}
Call::~Call()
{
}
