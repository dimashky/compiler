#include "all.h"

TypeFloat::TypeFloat() {
	this->typeId = TYPE_FLOAT;
	this->size = 4;
}

TypeExpression* TypeFloat::opPlus(int secondTypeId) {
	if (this->typeId != secondTypeId) {
		return new TypeError(secondTypeId + " dosent support + operation");
	}
	return new TypeFloat();
}
