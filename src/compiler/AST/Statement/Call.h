#pragma once
#include "Statement.h"
#include "../Object/Object.h"
class Call :public Statement
{
	Symbol *symbol;
public:
	Call();
	Call(Symbol *symbol);
	~Call();
};
