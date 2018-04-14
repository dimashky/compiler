#include "all.h"

TypeExpression::TypeExpression() {
	this->typeId = 0;
	this->size = 0;
}

int TypeExpression::getTypeId() {
	return this->typeId;
}

int TypeExpression::getSize() {
	return this->size;
}

void TypeExpression::setSize(int size) {
	this->size = size;
}

TypeExpression* TypeExpression::opPlus(int secondTypeId) {
	return new TypeError(this->typeId + " Type doesn't support + operator.");
}

TypeExpression* TypeExpression::opMinus(int secondTypeId) {
	return new TypeError(this->typeId + " Type doesn't support - operator.");
}

TypeExpression* TypeExpression::opDiv(int secondTypeId) {
	return new TypeError(this->typeId + " Type doesn't support ÷ operator.");
}

TypeExpression* TypeExpression::opMult(int secondTypeId) {
	return new TypeError(this->typeId + " Type doesn't support × operator.");
}

TypeExpression* TypeExpression::opMod(int secondTypeId) {
	return new TypeError(this->typeId + " Type doesn't support % operator.");
}

TypeExpression* TypeExpression::opGreaterThan(int secondTypeId) {
	return new TypeError(this->typeId + "  Type doesn't support > operation");
}

TypeExpression* TypeExpression::opLessThan(int secondTypeId) {
	return new TypeError(this->typeId + "  Type doesn't support < operation");
}

TypeExpression* TypeExpression::opGreaterOrEq(int secondTypeId) {
	return new TypeError(this->typeId + "  Type doesn't support >= operation");
}

TypeExpression* TypeExpression::opLessOrEq(int secondTypeId) {
	return new TypeError(this->typeId + "  Type doesn't support <= operation");
}

TypeExpression* TypeExpression::opAnd(int secondTypeId) {
	return new TypeError(this->typeId + "  Type doesn't support Logical_And operation");
}

TypeExpression* TypeExpression::opOr(int secondTypeId) {
	return new TypeError(this->typeId + "  Type doesn't support Logical_Or operation");
}

TypeExpression* TypeExpression::opEqual(int secondTypeId) {
	return new TypeError(this->typeId + "  Type doesn't support == operation");
}

TypeExpression* TypeExpression::opSqrBrackets(int secondTypeId) {
	return new TypeError(this->typeId + "  Type doesn't support [] operation");
}

int TypeExpression::equivelantTo(int secondTypeId) {
	return TYPE_ERROR;
}