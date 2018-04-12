#include "TypeExpression.h"
#include "TypeInteger.h"
#include "TypeError.h"

TypeInteger::TypeInteger() {
	this->typeId = TYPE::TYPE_INTEGER;
}

TypeExpression* TypeInteger::opPlus(int secondTypeId) {
	if (this->typeId != secondTypeId) {
		return new TypeError(secondTypeId + " dosent support + operation");
	}
	return new TypeInteger();
}