#pragma once
#include "Expression.h"
#include "../Object/Object.h"
#include "../../Symbol Table/Symbol.h"

using namespace::std;

class Identifier : public Expression
{
private:
	/*
	*	maybe there is no dot so at least preDot or postDot not equal to nullptr	
	*/
	Node* preDot;

	Symbol* postDot;

	bool is_array;

	vector<Node*>dimensions;

public:

	Identifier(Node* preDot, Symbol* postDot, bool is_array = false);

	int print(int);

	string getType();
	
	void setArrayDimensions(queue<Node*>dimensions);
	bool typeChecking() { return false; }
	~Identifier();
};

