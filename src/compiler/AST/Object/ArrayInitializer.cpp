#include "ArrayInitializer.h"
#include "../../Type Checker/all.h"
#include "../../Symbol Table/symbolTable.h"
#include "../../Symbol Table/Class.h"
#include "../../Symbol Table/Field.h"
#include "../../Symbol Table/LocalVariable.h"
#include "../Object/Procedure.h"

ArrayInitializer::ArrayInitializer(Symbol* type, bool complexType) :Object(nullptr, Node::current) {
	this->type = type;
	this->complexType = !complexType;
}


void ArrayInitializer::setDimensions(queue<Node*>elements) {
	while (!elements.empty()) {
		this->dimensions.push_back(elements.front());
		elements.pop();
	}
}

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
		cout << "toto" << endl;
	}
	return;
}

void ArrayInitializer::addElement(Node* element) {
	
	this->elements.push_back(element);
	
	return;
}

bool ArrayInitializer::typeChecking() {
	bool checkStatus = true;
	if (type) {
		TypeExpression* elementType;
		if (this->complexType) {
			Node* currentNode = this->parent;

			//up to parent method
			while (currentNode->getType() != "procedure") {
				currentNode = currentNode->getParent();
			}
			//up to parent class
			currentNode = currentNode->getParent();

			type = symbolTable::findType(((Class*)((Procedure*)currentNode)->getSymbol())->get_type_graph_position(), type->getName());

			if (type == nullptr) {
				this->nodeType = new TypeError("type " + type->getName() + " is not defined", type->getLineNo());
			}
			else {
				elementType = TypesTable::findOrCreate(((Class*)type)->getFullPath(), type);
			}
		}
		else {
			elementType = TypesTable::getType(type->getName()).first;
		}
		
		this->nodeType = TypesTable::findOrCreateArray(elementType, dimensions.size());
	}
	for (auto dimension : dimensions) {
		checkStatus |= dimension->typeChecking();
		if (dimension->nodeType->getTypeId() != TYPE_INTEGER) {
			this->nodeType = new TypeError("Array Dimesion should be of type integer ", type->getLineNo());
			break;
		}
	}

	for (auto el : elements) {
		checkStatus |= el->typeChecking();
		if (((TypeArray*)this->nodeType)->getOf() != el->nodeType) {
			this->nodeType = new TypeError("Array of "+ ((TypeArray*)this->nodeType)->getOf()->typeExpression() + " must not have element with type "+ el->nodeType->typeExpression());
			break;
		}
	}

	return true;
}

void ArrayInitializer::generateCode() {
	// solve array issue for one dimension now!
	if (dimensions.size() == 1) {
		for (auto dimension : dimensions) {
			dimension->generateCode();
			AsmGenerator::pop("t0");
			AsmGenerator::addInstruction("addi $t4, $0, 4");
			AsmGenerator::addInstruction("mul $t0, $t0, $t4");
			AsmGenerator::allocate("t5", "t0");
		}
		for (int i = 0; i < elements.size(); ++i) {
			elements[i]->generateCode();
			AsmGenerator::pop("t0");
			AsmGenerator::sw("t0", "t5", 4 * i);
		}
		AsmGenerator::push("t5");
	}
}

ArrayInitializer::~ArrayInitializer(){
}