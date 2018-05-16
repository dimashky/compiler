#pragma once
#include "Expression.h"

class AutoConst :public Expression
{

private:

	string type;

	int lineNo;

	void* value;

public:

	AutoConst(string type , void* value, Node* parent, int lineNo);
	
	void setType(string type);

	void setValue(void* value);

	string getType();
	
	void* getValue();

	int getLineNo();

	int print(int);

	bool typeChecking();
	
	~AutoConst();
};

