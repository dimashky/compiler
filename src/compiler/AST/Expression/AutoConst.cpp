#include "AutoConst.h"

AutoConst::AutoConst(string type, void* value, Node* parent):Expression(parent)
{
	this->type = type;
	this->value = value; 
}

string AutoConst::getType() 
{
	return this->type;
}

int AutoConst::print(int nodeCnt)
{
	// needs to procces value type use only integers now  
	fprintf(nodesFile, "{ id:%d, label:'%d', shape: 'box', color:'#47fcfc'},", nodeCnt, *((int*)value));
	return nodeCnt;

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
