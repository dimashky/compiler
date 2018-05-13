#pragma once
#include "Statement.h"
#include"../Expression/Expression.h"
#include"../Statement/Statement.h"
class For :public Statement
{

	queue<Node*> initializers, iterators;
	Node* condition, *statement;

public:

	For(Node *parent);
	
	int print(int);

	string getType();

	void setCondition(Node* condition) {
		this->condition = condition;
	}

	void setInitializers(queue<Node*>initializers) {
		this->initializers = initializers;
	}

	void addInitializer(Node* initializer) {
		this->initializers.push(initializer);
	}

	void setStatement(Node* statement) {
		this->statement = statement;
	}

	void setIterators(queue<Node*>iterators) {
		this->iterators = iterators;
	}

	~For();
};

