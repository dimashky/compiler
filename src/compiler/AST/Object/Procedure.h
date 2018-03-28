#pragma once
#include "Object.h" 
#include "../Statement/Block.h"
class Procedure :public Object
{
	vector<Object> locals;
	Block block;
	int nextAdr;  
	Procedure *program;
public:
	Procedure();
	~Procedure();
};

