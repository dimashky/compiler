#pragma once
#include "Statement.h"

class Block :public Statement
{

private:

	vector<Node*> statements;

public:
	Node* parentMethod;
	Block(Node *parent);
	
	string getType();

	void add(Node* statement);
	
	int print(int);
	
	bool typeChecking();
	void generateCode();

	~Block();
};

