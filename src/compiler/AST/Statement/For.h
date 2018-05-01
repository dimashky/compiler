#pragma once
#include "Statement.h"
#include"../Expression/Expression.h"
#include"../Statement/Statement.h"
#include"../../Type Checker/all.h"

class For :public Statement
{

private:

	queue<Node*> initializers, iterators;
	
	Node* condition, *statement;

public:

	For(Node *parent);
	
	int print(int);

	void setCondition(Node* condition);

	void setInitializers(queue<Node*>initializers);

	void addInitializer(Node* initializer);

	void setStatement(Node* statement);

	void setIterators(queue<Node*>iterators);

	string getType();
	bool typeChecking() { 
	
		auto cpy = this->initializers;
		
		while (!cpy.empty()) {
			cpy.front()->typeChecking();
			cpy.pop();
		}

		cpy = iterators;

		while (!cpy.empty()) {
			cpy.front()->typeChecking();
			cpy.pop();
		}

		condition->typeChecking();
		
		if (condition->nodeType->getTypeId() != TYPE_BOOL) {
			new TypeError("While condition must be boolean type");
		}

		statement->typeChecking();

		return true;
	}

	void generateCode() {

	}

	~For();
};

