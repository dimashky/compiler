#pragma once
#include "Statement.h"
#include "../Object/Object.h"
class Call :public Statement
{

	Symbol *symbol;

	vector<pair<Node*,int> >params;

	/*
	*	pair.second hold one of these values : 
	*		0 => nothing
	*		1 => REF
	*		2 => OUT
	*/



public:

	Call(Symbol *symbol  , Node* parent);

	void setParams(vector<pair<Node*, int> > params) {
		this->params = params;
		return;
	}

	int print(int nodeCnt) {

		int currentId = nodeCnt;
		
		cout << "--------------------------" << endl;
		
		cout << symbol->getName() << endl;

		cout << params.size() << endl;



		cout << "--------------------------" << endl;
		
		return nodeCnt;
	}

	Symbol* getSymbol() {
		return symbol;
	}

	string getType();

	~Call();

};

