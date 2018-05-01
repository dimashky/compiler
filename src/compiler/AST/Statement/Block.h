#pragma once
#include "Statement.h"
class Block :public Statement
{

private:

	vector<Node*> statements;

public:
	Block(Node *parent);
	
	void add(Node* statement);
	
	int print(int);

	string getType();
	
	bool typeChecking();
	void generateCode() {
		for (auto statement : statements) {
			statement->generateCode();
		}
	}
	~Block();
};

