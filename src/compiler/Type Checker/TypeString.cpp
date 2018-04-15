#include "all.h"
#include <iostream>
#include <string>

TypeString::TypeString() {
	this->typeId = TYPE_STRING;
	this->size = 255;
}

TypeString* TypeString::instance = nullptr;

TypeString* TypeString::getInstance() {
	if (TypeString::instance == nullptr) {
		TypeString::instance = new TypeString();
	}
	return TypeString::instance;
}

TypeExpression* TypeString::opPlus(int secondTypeId) {
	if (this->equivelantTo(secondTypeId))
		return TypeString::getInstance();
	return new TypeError(TypeCheckingHelper::getTypeName(secondTypeId) + " Type doesn't support aggregate operation");
}

TypeExpression* TypeString::opEqual(int secondTypeId) {
	if (this->equivelantTo(secondTypeId))
		return TypeString::getInstance();
	return new TypeError(TypeCheckingHelper::getTypeName(secondTypeId) + "  Type doesn't support aggregate operation");
}

int TypeString::getTypeId() {
	return TYPE_STRING;
}

int TypeString::equivelantTo(int secondTypeId) {
	if (secondTypeId == TYPE_STRING || secondTypeId == TYPE_CHAR)
		return TYPE_STRING;
	return TYPE_ERROR;
}
