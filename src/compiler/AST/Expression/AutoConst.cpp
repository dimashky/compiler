#include "AutoConst.h"
AutoConst::AutoConst()
{

}
AutoConst::AutoConst(string type, void* value)
{
	this->type = type;
	this->value = value; 
}

AutoConst::~AutoConst()
{
}
