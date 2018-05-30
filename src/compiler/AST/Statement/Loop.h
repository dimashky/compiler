#pragma once
#include "Statement.h"
#include"../Expression/Expression.h"
#include"../Statement/Statement.h"
#include"../../Type Checker/all.h"

class Loop :public Statement
{
public:
	int startLabel, exitLabel;

	Loop(Node *parent);

	~Loop();
};

