#pragma once
#include "Statement.h"
#include"../Expression/Expression.h"
#include"../Statement/Statement.h"
class While :public Statement
{
	Expression cond;
	Statement stat;
public:
	While();
	~While();
};

