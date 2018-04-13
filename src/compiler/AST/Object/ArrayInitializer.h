#pragma once
#include "Object.h"
#include "../../Symbol Table/Symbol.h"
#include "../Expression/Expression.h"
class ArrayInitializer :public Object
{
	vector<Node*>elements;
public:
	ArrayInitializer();

	int print(int);

	string getType();

	vector<Node*> getElements();
	
	void setElements(queue<Node*>elements);

	void addElement(Node* element);

	~ArrayInitializer();
};

