#include "Object.h"



Object::Object()
{
}
Object::Object(Type  type, string name)
{
	this->type = type; 
	this->name = name; 
}
Object::~Object()
{
}
