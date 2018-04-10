#include "Call.h"

Call::Call(Symbol *symbol, Node *parent, bool new_expression, bool known_type) :Statement(parent)
{
	this->symbol = symbol;
	this->new_expression = new_expression;
	this->known_type = known_type;
}

string Call::getType() {
	return "call";
}

Call::~Call()
{
}
