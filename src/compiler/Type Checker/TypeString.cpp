#include "all.h"

TypeString::TypeString() {
	this->typeId = TYPE_STRING;
	this->size = 0;
}

//static definition
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
	return new TypeError((secondTypeId) + "  Type doesn't support aggregate operation");
}

TypeExpression* TypeString::opEqual(int secondTypeId) {
	if (this->equivelantTo(secondTypeId))
		return TypeString::getInstance();
	return new TypeError((secondTypeId) + "  Type doesn't support aggregate operation");
}

int TypeString::getTypeId() {
	return TYPE_STRING;
}

int TypeString::equivelantTo(int secondTypeId) {
	if (secondTypeId == TYPE_STRING)
		return TYPE_STRING;
	if (secondTypeId == TYPE_INTEGER)
		return TYPE_STRING;
	return TYPE_ERROR;
}
