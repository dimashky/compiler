#pragma once
#include "Statement.h"

class Block :public Statement
{

private:

	vector<Node*> statements;
	Node* parentMethod;

public:
	Block(Node *parent);
	
	string getType();

	void add(Node* statement);
	
	int print(int);
	
	bool typeChecking();
	void generateCode();

	~Block();
};

