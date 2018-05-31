#pragma once
#include "Statement.h"
#include "../Object/Object.h"
#include "../../Symbol Table/Method.h"
#include "../Expression/Identifier.h"
#include "../../Type Checker/all.h"

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
	bool known_type, base_call;
public:
	Method* calledMethod;

	bool new_expression, isBaseCall;
	Call(Node *call, Node* parent, bool new_expression = false, bool known_type = false,bool base_call = false);

	string getType();

	void setParams(vector<pair<Node*, int> > params);
	
	void updateParamsSymboltableRef(void* newSymboltable);

	int print(int nodeCnt);

	bool typeChecking();

	void generateCode();

	~Call();

};

