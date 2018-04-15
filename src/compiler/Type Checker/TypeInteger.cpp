#include "all.h"

TypeInteger* TypeInteger::instance = nullptr;

TypeInteger::TypeInteger() {
	this->typeId = TYPE_INTEGER;
	this->size = 4;
}
TypeInteger* TypeInteger::getInstance() {
	if (!TypeInteger::instance) {
		TypeInteger::instance = new TypeInteger();
	}
	return TypeInteger::instance;
}

TypeExpression* TypeInteger::opPlus(int secondTypeId) {
	if (this->equivelantTo(secondTypeId)) {
		return TypeInteger::getInstance();
	}
	return new TypeError(this->typeId + "  Type doesn't support Plus operation");
}


TypeExpression* TypeInteger::opMinus(int secondTypeId) {
	if (this->equivelantTo(secondTypeId))
		return TypeInteger::getInstance();
	return new TypeError(this->typeId + "  Type doesn't support Minus operation");
}

TypeExpression* TypeInteger::opMult(int secondTypeId) {
	if (this->equivelantTo(secondTypeId))
		return TypeInteger::getInstance();
	return new TypeError(this->typeId + "  Type doesn't support Mult operation");
}

TypeExpression* TypeInteger::opDiv(int secondTypeId) {
	if (this->equivelantTo(secondTypeId))
		return TypeInteger::getInstance();
	return new TypeError(this->typeId + "  Type doesn't support Div operation");
}

TypeExpression* TypeInteger::opMod(int secondTypeId) {
	if (this->equivelantTo(secondTypeId))
		return TypeInteger::getInstance();
	return new TypeError(this->typeId + "  Type doesn't support Mod operation");
}

TypeExpression* TypeInteger::opExp(int secondTypeId) {
	if (this->equivelantTo(secondTypeId))
		return TypeInteger::getInstance();
	return new TypeError(this->typeId + "  Type doesn't support Exp operation");
}

TypeExpression* TypeInteger::opGreaterThan(int secondTypeId) {
	if (secondTypeId == TYPE_INTEGER || secondTypeId == TYPE_FLOAT)
		return TypeBoolean::getInstance();
	return new TypeError(this->typeId + "  Type doesn't support > operation");
}

// <
TypeExpression* TypeInteger::opLessThan(int secondTypeId) {
	if (secondTypeId == TYPE_INTEGER || secondTypeId == TYPE_FLOAT)
		return TypeBoolean::getInstance();
	return new TypeError(this->typeId + "  Type doesn't support < operation");
}

// >=
TypeExpression* TypeInteger::opGreaterOrEq(int secondTypeId) {
	if (secondTypeId == TYPE_INTEGER || secondTypeId == TYPE_FLOAT)
		return TypeBoolean::getInstance();
	return new TypeError(this->typeId + "  Type doesn't support >= operation");
}

// <=
TypeExpression* TypeInteger::opLessOrEq(int secondTypeId) {
	if (secondTypeId == TYPE_INTEGER || secondTypeId == TYPE_FLOAT)
		return TypeBoolean::getInstance();
	return new TypeError(this->typeId + "  Type doesn't support <= operation");
}

TypeExpression* TypeInteger::opEqual(int secondTypeId) {
	if (secondTypeId == TYPE_INTEGER || secondTypeId == TYPE_FLOAT)
		return TypeBoolean::getInstance();
	return new TypeError(this->typeId + " Type doesn't support == operation");
}

int TypeInteger::equivelantTo(int secondTypeId) {
	if (secondTypeId == TYPE_INTEGER)
		return TYPE_INTEGER;
	if (secondTypeId == TYPE_FLOAT)
		return TYPE_FLOAT;
	if (secondTypeId == TYPE_STRING)
		return TYPE_STRING;
	return TYPE_ERROR;
}

