#pragma once
#include "Expression.h"

class AutoConst :public Expression
{

private:

	string type;

	void* value;

public:

	AutoConst(string type , void* value, Node* parent);
	
	int print(int);

	string getType();
	
	void* getValue();

	void setType(string type);
	
	void setValue(void* value);

	bool typeChecking() { return true; }
	void generateCode();

	~AutoConst();
};

