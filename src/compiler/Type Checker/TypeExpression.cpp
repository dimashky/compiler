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

TypeExpression* TypeExpression::opSqrBrackets(TypeExpression* elementType) {
	return new TypeError(this->typeExpression() + " doesn't support ["+ elementType->typeExpression() + "] operation.");
}

TypeExpression* TypeExpression::opBrackets(std::vector<TypeExpression*>& paramsType) {
	return new TypeError(this->typeExpression() + " doesn't support () operation.");
}

TypeExpression* TypeExpression::opDot(std::string c) {
	return new TypeError(this->typeExpression() + " doesn't support DOT operation.");
}

int TypeExpression::equivelantTo(int secondTypeId) {
	return TYPE_ERROR; // default
}