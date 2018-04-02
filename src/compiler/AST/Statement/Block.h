#pragma once
#include "Statement.h"
class Block :public Statement
{
	vector<Statement*> statements;public:
	Block(Node *parent);
	void add(Statement* statement);
	~Block();
};

