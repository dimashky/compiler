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
	
	int print(int);

	string getType();

	void setStatement(Node* statement);
	bool typeChecking() { 
		
		// TODO : after handeling array in yacc handle left symbol with right one !!
		symbolLeft->typeChecking();
		
		symbolRight->typeChecking();
		
		statement->typeChecking();
		
		return true;
	}
	~Foreach();
};

