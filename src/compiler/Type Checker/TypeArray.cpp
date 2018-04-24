#include "all.h"

TypeArray::TypeArray(TypeExpression* elementType, int size = 0) {
	this->bytes = size * elementType->getBytes();
	this->elementType = elementType;
	this->size = size;
}

TypeExpression* TypeArray::getOf() {
	return this->elementType;
}

int TypeArray::getSize() {
	return this->size;
}

string TypeArray::typeExpression() {
	return "[" + this->elementType->typeExpression() + "]";
}