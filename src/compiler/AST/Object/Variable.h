#pragma once
#include "Object.h"
#include "../../Symbol Table/Symbol.h"
class Variable :public Object
{
public:
	Variable(Symbol* symbol);
	~Variable();
};

