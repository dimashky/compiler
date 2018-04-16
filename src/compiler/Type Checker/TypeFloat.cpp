#include "all.h"

TypeFloat* TypeFloat::instance = nullptr;

TypeFloat::TypeFloat() {
	this->typeId = TYPE_FLOAT;
	this->bytes = 4;
}

TypeFloat* TypeFloat::getInstance() {
	if (instance == nullptr)
		instance = new TypeFloat();
	return instance;
}

// + - * /
TypeExpression* TypeFloat::opPlus(int secondTypeId) {
	if (this->equivelantTo(secondTypeId))
		return TypeFloat::getInstance();
	return new TypeError(TypeCheckingHelper::getTypeName(this->typeId) + "  Type doesn't support + operation with " + TypeCheckingHelper::getTypeName(secondTypeId));
}

TypeExpression* TypeFloat::opMinus(int secondTypeId) {
	if (this->equivelantTo(secondTypeId))
		return TypeFloat::getInstance();
	return new TypeError(TypeCheckingHelper::getTypeName(this->typeId) + "  Type doesn't support - operation with " + TypeCheckingHelper::getTypeName(secondTypeId));
}

TypeExpression* TypeFloat::opMult(int secondTypeId) {
	if (this->equivelantTo(secondTypeId))
		return TypeFloat::getInstance();
	return new TypeError(TypeCheckingHelper::getTypeName(this->typeId) + "  Type doesn't support x operation with " + TypeCheckingHelper::getTypeName(secondTypeId));
}

TypeExpression* TypeFloat::opDiv(int secondTypeId) {
	if (this->equivelantTo(secondTypeId))
		return TypeFloat::getInstance();
	return new TypeError(TypeCheckingHelper::getTypeName(this->typeId) + "  Type doesn't support / operation with " + TypeCheckingHelper::getTypeName(secondTypeId));
}

TypeExpression* TypeFloat::opMod(int secondTypeId) {
	if (this->equivelantTo(secondTypeId))
		return TypeFloat::getInstance();
	return new TypeError(TypeCheckingHelper::getTypeName(this->typeId) + "  Type doesn't support % operation with " + TypeCheckingHelper::getTypeName(secondTypeId));
}

TypeExpression* TypeFloat::opGreaterThan(int secondTypeId) {
	if (secondTypeId == TYPE_INTEGER || secondTypeId == TYPE_FLOAT)
		return TypeBoolean::getInstance();
	return new TypeError((secondTypeId) + "  Type doesn't support > operation");
}

// <
TypeExpression* TypeFloat::opLessThan(int secondTypeId) {
	if (secondTypeId == TYPE_INTEGER || secondTypeId == TYPE_FLOAT)
		return TypeBoolean::getInstance();
	return new TypeError((secondTypeId) + "  Type doesn't support < operation");
}

// >=
TypeExpression* TypeFloat::opGreaterOrEq(int secondTypeId) {
	if (secondTypeId == TYPE_INTEGER || secondTypeId == TYPE_FLOAT)
		return TypeBoolean::getInstance();
	return new TypeError((secondTypeId) + "  Type doesn't support >= operation");
}

// <=
TypeExpression* TypeFloat::opLessOrEq(int secondTypeId) {
	if (secondTypeId == TYPE_INTEGER || secondTypeId == TYPE_FLOAT)
		return TypeBoolean::getInstance();
	return new TypeError((secondTypeId) + "  Type doesn't support <= operation");
}

TypeExpression* TypeFloat::opEqual(int secondTypeId) {
	if (secondTypeId == TYPE_INTEGER || secondTypeId == TYPE_FLOAT)
		return TypeBoolean::getInstance();
	return new TypeError((secondTypeId) + " Type doesn't support == operation");
}

int TypeFloat::equivelantTo(int secondTypeId) {
	if (secondTypeId == TYPE_FLOAT || secondTypeId == TYPE_INTEGER)
		return TYPE_FLOAT;
	return TYPE_ERROR;
}
