#pragma once
#include "Expression.h"
class AutoConst :public Expression
{
	string type; 
	void* value; 

  public:
	AutoConst();
	AutoConst(string type , void* value);
	~AutoConst();
};

