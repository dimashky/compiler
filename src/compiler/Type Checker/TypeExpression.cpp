#include "all.h"

TypeExpression::TypeExpression() {
	this->typeId = 0;
	this->bytes = 0;
}

int TypeExpression::getTypeId() {
	return this->typeId;
}

int TypeExpression::getBytes() {
	return this->bytes;
}

void TypeExpression::setBytes(int bytes) {
	this->bytes = bytes;
}

string TypeExpression::typeExpression() {
	return "Error"; // default
}

TypeExpression* TypeExpression::operation(Operator op, TypeExpression* secondOperand) {
	return new TypeError(TypeCheckingHelper::getTypeName(this->typeId) + " doesn't support "+ OperatorName[op] +" operator.");
}

int TypeExpression::equivelantTo(TypeExpression* secondOperand) {
	return TYPE_ERROR; // default
}