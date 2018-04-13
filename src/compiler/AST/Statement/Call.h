#pragma once
#include "Statement.h"
#include "../Object/Object.h"
class Call :public Statement
{

private:

	Node *call;

	/*
	*	pair.second hold one of these values :
	*		0 => nothing
	*		1 => REF
	*		2 => OUT
	*/
	
	vector<pair<Node*,int> >params;

	bool new_expression, known_type;

public:

	Call(Node *call, Node* parent, bool new_expression = false, bool known_type = false);

	int print(int nodeCnt);

	Symbol* getSymbol();

	string getType();

	void setParams(vector<pair<Node*, int> > params);

	~Call();

};

