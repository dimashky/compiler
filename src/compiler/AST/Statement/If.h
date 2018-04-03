#pragma once
#include "Statement.h"
#include"../Expression/Expression.h"
#include"../Statement/Statement.h"
class If :public Statement
{
	Expression *codnition;
	Node *ifStatement, *elseStatement;
public:
	If(Expression *codnition, Node *parent);
	~If();
	string getType() {
		return "if";
	}

	void setIfStatement(Node* statement) {
		this->ifStatement = statement;
	};
	void print(int lev) {
		cout << "lev " << lev << endl;
		cout << "if" << endl;
		codnition->print(lev + 1);
		if (ifStatement)
			ifStatement->print(lev + 1);

		if (elseStatement)
			elseStatement->print(lev + 1);
	}

	void setElseStatement(Node* statement) {
		this->elseStatement = statement;
	};

};

