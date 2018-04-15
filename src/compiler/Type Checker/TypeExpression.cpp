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
	return new TypeError(TypeCheckingHelper::getTypeName(this->typeId) + " Type doesn't support + operator "+ TypeCheckingHelper::getTypeName(secondTypeId));
}

TypeExpression* TypeExpression::opMinus(int secondTypeId) {
	return new TypeError(TypeCheckingHelper::getTypeName(this->typeId) + " Type doesn't support - operator "+ TypeCheckingHelper::getTypeName(secondTypeId));
}

TypeExpression* TypeExpression::opDiv(int secondTypeId) {
	return new TypeError(TypeCheckingHelper::getTypeName(this->typeId) + " Type doesn't support / operator "+ TypeCheckingHelper::getTypeName(secondTypeId));
}

TypeExpression* TypeExpression::opMult(int secondTypeId) {
	return new TypeError(TypeCheckingHelper::getTypeName(this->typeId) + " Type doesn't support x operator "+ TypeCheckingHelper::getTypeName(secondTypeId));
}

TypeExpression* TypeExpression::opMod(int secondTypeId) {
	return new TypeError(TypeCheckingHelper::getTypeName(this->typeId) + " Type doesn't support % operator "+ TypeCheckingHelper::getTypeName(secondTypeId));
}

TypeExpression* TypeExpression::opExp(int secondTypeId) {
	return new TypeError(TypeCheckingHelper::getTypeName(this->typeId) + " Type doesn't support ^ operator "+ TypeCheckingHelper::getTypeName(secondTypeId));
}

TypeExpression* TypeExpression::opGreaterThan(int secondTypeId) {
	return new TypeError(TypeCheckingHelper::getTypeName(this->typeId) + "  Type doesn't support > operation "+ TypeCheckingHelper::getTypeName(secondTypeId));
}

TypeExpression* TypeExpression::opLessThan(int secondTypeId) {
	return new TypeError(TypeCheckingHelper::getTypeName(this->typeId) + "  Type doesn't support < operation "+ TypeCheckingHelper::getTypeName(secondTypeId));
}

TypeExpression* TypeExpression::opGreaterOrEq(int secondTypeId) {
	return new TypeError(TypeCheckingHelper::getTypeName(this->typeId) + "  Type doesn't support >= operation "+ TypeCheckingHelper::getTypeName(secondTypeId));
}

TypeExpression* TypeExpression::opLessOrEq(int secondTypeId) {
	return new TypeError(TypeCheckingHelper::getTypeName(this->typeId) + "  Type doesn't support <= operation "+ TypeCheckingHelper::getTypeName(secondTypeId));
}

TypeExpression* TypeExpression::opAnd(int secondTypeId) {
	return new TypeError(TypeCheckingHelper::getTypeName(this->typeId) + "  Type doesn't support Logical_And operation "+ TypeCheckingHelper::getTypeName(secondTypeId));
}

TypeExpression* TypeExpression::opOr(int secondTypeId) {
	return new TypeError(TypeCheckingHelper::getTypeName(this->typeId) + "  Type doesn't support Logical_Or operation "+ TypeCheckingHelper::getTypeName(secondTypeId));
}

TypeExpression* TypeExpression::opEqual(int secondTypeId) {
	return new TypeError(TypeCheckingHelper::getTypeName(this->typeId) + "  Type doesn't support == operation "+ TypeCheckingHelper::getTypeName(secondTypeId));
}

TypeExpression* TypeExpression::opSqrBrackets(int secondTypeId) {
	return new TypeError(TypeCheckingHelper::getTypeName(this->typeId) + "  Type doesn't support [] operation "+ TypeCheckingHelper::getTypeName(secondTypeId));
}

int TypeExpression::equivelantTo(int secondTypeId) {
	return TYPE_ERROR;
}