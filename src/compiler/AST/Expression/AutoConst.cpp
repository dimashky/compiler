#include "AutoConst.h"

AutoConst::AutoConst(string type, void* value, Node* parent):Expression(parent)
{
	this->type = type;
	this->value = value; 
}

AutoConst::~AutoConst()
{
}
