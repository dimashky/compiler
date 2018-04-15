#include "all.h"

TypeBoolean::TypeBoolean() {
	this->typeId = TYPE_BOOL;
	this->size = 1;
}

//static defifintion
TypeBoolean* TypeBoolean::instance = nullptr;

TypeBoolean* TypeBoolean::getInstance() {
	if (instance == nullptr) {
		instance = new TypeBoolean();
	}
	return instance;
}

TypeExpression* TypeBoolean::opAnd(int secondTypeId) {
	if (this->equivelantTo(secondTypeId))
		return TypeBoolean::getInstance();
	return new TypeError(TypeCheckingHelper::getTypeName(this->typeId) + "  Type doesn't support && operation with " + TypeCheckingHelper::getTypeName(secondTypeId));
}

TypeExpression* TypeBoolean::opOr(int secondTypeId) {
	if (this->equivelantTo(secondTypeId))
		return TypeBoolean::getInstance();
	return new TypeError(TypeCheckingHelper::getTypeName(this->typeId) + "  Type doesn't support || operation with " + TypeCheckingHelper::getTypeName(secondTypeId));
}


int TypeBoolean::equivelantTo(int secondTypeId) {
	if (secondTypeId == TYPE_INTEGER || secondTypeId == TYPE_BOOL)
		return TYPE_BOOL;
	return TYPE_ERROR;
}