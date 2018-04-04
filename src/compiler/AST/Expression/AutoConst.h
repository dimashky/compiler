#pragma once
#include "Expression.h"

class AutoConst :public Expression
{
	string type;
	void* value;
  public:


	AutoConst(string type , void* value, Node* parent);
	
	string getType();
	void setType(string type);
	
	void* getValue();
	void setValue(void* value);

	int print(int);


	~AutoConst();
};

