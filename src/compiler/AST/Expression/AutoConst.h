#pragma once
#include "Expression.h"

class AutoConst :public Expression
{

private:

	string type;

	void* value;

public:

	AutoConst(string type , void* value, Node* parent);
	
	void setType(string type);

	void setValue(void* value);

	string getType();
	
	void* getValue();

	int print(int);

	bool typeChecking();
	
	~AutoConst();
};

