#pragma once
#include "Statement.h"
#include "../../Type Checker/all.h"
#include"../Expression/Expression.h"
#include"../Statement/Statement.h"
#include "../../Symbol Table/Symbol.h"
#include "../Object/Variable.h"
class Foreach :public Statement
{
private:
	Variable *symbolLeft;
	Node *statement, *symbolRight;
public:
	Foreach(Symbol *symbolLeft, Node *symbolRight, Node *parent);
	
	string getType();

	void setStatement(Node* statement);
	
	int print(int);
	
	bool typeChecking();

	~Foreach();
};

