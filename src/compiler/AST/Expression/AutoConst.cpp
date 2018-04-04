#include "AutoConst.h"

AutoConst::AutoConst(string type, void* value, Node* parent):Expression(parent)
{
	this->type = type;
	this->value = value; 
}

string AutoConst::getType() 
{
	return "auto";
}

void AutoConst::print(int level)
{
	// needs to procces value type use only integers now  
	cout << *((int*)value) << endl;
}
string AutoConst::getType()
{
	return type; 
}
void AutoConst::setType(string type)
{
	this->type = type;
}
void* AutoConst::getValue()
{
	return value;
}
void AutoConst::setValue(void* value)
{
	this->value=value; 
}
AutoConst::~AutoConst()
{
}
