#pragma once
#include "Object.h"
#include "../../Symbol Table/Symbol.h"
#include "../Expression/Expression.h"
class ArrayInitializer :public Object
{
	vector<Node*>elements, dimensions;
	Symbol* type;
	bool complexType;
public:
	ArrayInitializer(Symbol* type = nullptr, bool complexType = false);

	string getType();

	vector<Node*> getElements();
	
	void setElements(queue<Node*>elements);

	void setDimensions(queue<Node*>elements);

	void addElement(Node* element);

	int print(int);

	bool typeChecking();

	void generateCode();

	~ArrayInitializer();
};

