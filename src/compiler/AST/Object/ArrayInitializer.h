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

	int print(int);

	string getType();

	vector<Node*> getElements();
	
	void setElements(queue<Node*>elements);
	void setDimensions(queue<Node*>elements) {
		while (!elements.empty()) {
			this->dimensions.push_back(elements.front());
			elements.pop();
		}
	}

	void addElement(Node* element);

	bool typeChecking();

	~ArrayInitializer();
};

