#include "all.h"

TypeFloat* TypeFloat::instance = nullptr;

TypeFloat::TypeFloat() {
	this->typeId = TYPE_FLOAT;
	this->size = 4;
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
	return new TypeError((secondTypeId) + "  Type doesn't support aggregate operation");
}

TypeExpression* TypeFloat::opMinus(int secondTypeId) {
	if (this->equivelantTo(secondTypeId))
		return TypeFloat::getInstance();
	return new TypeError((secondTypeId) + "  Type doesn't support aggregate operation");
}

TypeExpression* TypeFloat::opMult(int secondTypeId) {
	if (this->equivelantTo(secondTypeId))
		return TypeFloat::getInstance();
	return new TypeError((secondTypeId) + "  Type doesn't support aggregate operation");
}

TypeExpression* TypeFloat::opDiv(int secondTypeId) {
	if (this->equivelantTo(secondTypeId))
		return TypeFloat::getInstance();
	return new TypeError((secondTypeId) + "  Type doesn't support aggregate operation");
}

TypeExpression* TypeFloat::opMod(int secondTypeId) {
	if (this->equivelantTo(secondTypeId))
		return TypeFloat::getInstance();
	return new TypeError((secondTypeId) + "  Type doesn't support aggregate operation");
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
