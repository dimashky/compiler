#pragma once
#include "Statement.h"
#include"../Expression/Expression.h"
#include"Loop.h"
#include"../../Type Checker/all.h"

class For :public Loop
{

private:
	queue<Node*> initializers, iterators;
	Node* condition, *statement;
public:
	For(Node *parent);
	
	string getType();

	void setCondition(Node* condition);

	void setInitializers(queue<Node*>initializers);

	void setStatement(Node* statement);

	void setIterators(queue<Node*>iterators);

	void addInitializer(Node* initializer);

	int print(int);

	bool typeChecking();

	void generateCode();

	~For();
};

