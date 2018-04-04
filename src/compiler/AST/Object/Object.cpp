#include "Object.h"

Object::Object(Symbol* symbol, Node* parent):Node(parent)
{
	this->symbol = symbol;
}

Symbol* Object::getSymbol()
{
	return symbol;
}

void Object::setSymbol(Symbol *symbol)
{
	this->symbol = symbol;
}

Object::~Object()
{
}
