#pragma once
#include "Object.h"
class Variable :public Object
{
	int adrress;
public:
	Variable();
	Variable(Type type, string name);
	~Variable();
};

