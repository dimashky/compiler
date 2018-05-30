#pragma once
#include "Statement.h"
#include"../Expression/Expression.h"
#include"Loop.h"
#include "../../Type Checker/all.h"

class While :public Loop
{
private:
	Node *condition, *statement;
public:
	While(Node *condition, Node *statement, Node *parent);
	
	string getType();

	void setStatement(Node* statement);

	int print(int);

	bool typeChecking();

	void generateCode();
	~While();
};

