#include "ArrayInitializer.h"
#include "../../Type Checker/all.h"

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

bool ArrayInitializer::typeChecking() {
	return true;	// TEMP we return back 

	bool checkStatus = true;
	for (auto el : elements) {
		checkStatus |= el->typeChecking();
		if (((TypeArray*)this->nodeType)->getOf() != el->nodeType) {
			this->nodeType = new TypeError("Array of "+ ((TypeArray*)this->nodeType)->getOf()->typeExpression() + " must not have element with type "+ el->nodeType->typeExpression());
			break;
		}
	}
	return checkStatus;
}

ArrayInitializer::~ArrayInitializer(){
}