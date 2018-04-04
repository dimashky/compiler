#pragma once
#include "Statement.h"
class Block :public Statement
{
	vector<Node*> statements;public:
	Block(Node *parent);
	
	void add(Node* statement);
	
	string getType();
	
	void print(int lev);

	~Block();
};

