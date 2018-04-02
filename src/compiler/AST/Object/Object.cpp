#include "Object.h"



Object::Object(Symbol* symbol, Node* parent):Node(parent)
{
	this->symbol = symbol;
}
Object::~Object()
{
}
