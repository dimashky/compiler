#pragma once
#include "Statement.h"
#include"../Expression/Expression.h"
#include"../Statement/Statement.h"
#include "../../Type Checker/all.h"
class If :public Statement
{
	Node *codnition;
	Node *ifStatement, *elseStatement;
public:
	If(Node *codnition, Node *parent);

	int print(int);

	string getType();

	void setIfStatement(Node* statement);

	void setElseStatement(Node* statement);
	bool typeChecking() 
	{ 
		this->ifStatement->typeChecking();
		this->codnition->typeChecking();
		if (this->codnition->nodeType->getTypeId() != TYPE_BOOL) {
			new TypeError("IF condition must be boolean type");
		}
		if (elseStatement) {
			this->elseStatement->typeChecking();
		}

		return true;
	}

	void generateCode() {

	};

	~If();

	
};

