#include "Call.h"

Call::Call(Symbol *symbol,Node *parent) :Statement(parent)
{
	this->symbol = symbol;
}

string Call::getType() {
	return "call";
}

Call::~Call()
{
}
