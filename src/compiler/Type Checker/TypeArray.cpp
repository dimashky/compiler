#include "all.h"

TypeArray::TypeArray(TypeExpression* elementType, int dimension = 1) {
	this->bytes = dimension * elementType->getBytes();
	this->elementType = elementType;
	this->dimension = dimension;
}

TypeExpression* TypeArray::getOf() {
	return this->elementType;
}

int TypeArray::getDimension() {
	return this->dimension;
}

string TypeArray::typeExpression() {
	string exp = elementType->typeExpression() + "[";
	for (int i = 0; i < dimension-1; ++i) {
		exp += ",";
	}
	return (exp + "]");
}


TypeExpression* TypeArray::operation(Operator op, TypeExpression* secondOperand = nullptr) {
	int equivelant = TYPE_ARRAY;

	if (secondOperand != nullptr) {
		equivelant = this->equivelantTo(secondOperand);
	}

	if (equivelant == TYPE_ERROR) {
		return new TypeError(this->typeExpression() + " is not equivelant to " + secondOperand->typeExpression());
	}
	else {
		switch (op)
		{
		case Equal:
			return this;
			break;
		default:
			return new TypeError(this->typeExpression() + " has no predefined " + OperatorName[op] + " operation");
			break;
		}
	}
}

int TypeArray::equivelantTo(TypeExpression* secondOperand, bool cast) {
	if (secondOperand->getTypeId() == TYPE_ARRAY && this->elementType == ((TypeArray*)secondOperand)->getOf() && this->dimension == ((TypeArray*)secondOperand)->getDimension()) {
		return TYPE_ARRAY;
	}
	return TYPE_ERROR;
}
