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
		return TypeBoolean::getInstance()->getTypeId(TYPE_BOOL);
	return new TypeError(TypeSystemHelper::getTypeName(secondTypeId) + "  Type doesn't support aggregate operation");
}

TypeExpression* TypeBoolean::opOr(int secondTypeId) {
	if (this->equivelantTo(secondTypeId))
		return TypesTable::getInstance()->getType(BOOLEAN_TYPE_ID);
	return new TypeError(TypeSystemHelper::getTypeName(secondTypeId) + "  Type doesn't support aggregate operation");
}


int TypeBoolean::equivelantTo(int secondTypeId) {
	if (secondTypeId == INTEGER_TYPE_ID || secondTypeId == BOOLEAN_TYPE_ID)
		return BOOLEAN_TYPE_ID;
	return ERROR_TYPE_ID;
}