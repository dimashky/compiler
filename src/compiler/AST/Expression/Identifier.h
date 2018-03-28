#pragma once
#include "Expression.h"
#include "../Object/Object.h"
class Identifier : public Expression
{
	Object object; 
public:
	Identifier();
	~Identifier();
};

