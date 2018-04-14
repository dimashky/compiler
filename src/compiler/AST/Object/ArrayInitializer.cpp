#include "ArrayInitializer.h"

ArrayInitializer::ArrayInitializer() :Object(nullptr, nullptr) {}

int ArrayInitializer::print(int nodeCnt)
{
	return nodeCnt;
}

string ArrayInitializer::getType()
{
	return "array_init";
}

vector<Node*> ArrayInitializer::getElements() {
	return this->elements;
}

void ArrayInitializer::setElements(queue<Node*>elements)
{
	while (!elements.empty()) {
		this->elements.push_back(elements.front());
		elements.pop();
	}
	return;
}

void ArrayInitializer::addElement(Node* element) {
	
	this->elements.push_back(element);
	
	return;
}


ArrayInitializer::~ArrayInitializer()
{

}