#pragma once
#include "Statement.h"
#include "../Object/Object.h"
class Call :public Statement
{
	Object proc;
public:
	Call();
	~Call();
};

