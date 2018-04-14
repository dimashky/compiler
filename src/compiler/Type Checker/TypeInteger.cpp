#include "all.h"

TypeInteger::TypeInteger() {
	this->typeId = TYPE_INTEGER;
	this->size = 4;
}

TypeExpression* TypeInteger::opPlus(int secondTypeId) {
	if (this->typeId != secondTypeId) {
		return new TypeError(secondTypeId + " dosent support + operation");
	}
	return new TypeInteger();
}