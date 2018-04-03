#pragma once
#include "Statement.h"
class Block :public Statement
{
	vector<Node*> statements;public:
	Block(Node *parent);
	void add(Node* statement);
	~Block();
	string getType() {
		return "block";
	}
	void print(int lev) {
		cout << "lev " << lev << endl;
		cout << "block" << endl;
		for (int i = 0;i < statements.size();i++)
			statements[i]->print(lev + 1);
	}
};

