#include "TypeExpression.h"
#include "TypeError.h"

TypeExpression::TypeExpression() {
	this->typeId = -1;
}

int TypeExpression::getTypeId() {
	return this->typeId;
}

TypeExpression* TypeExpression::opPlus(int typeId) {
	return new TypeError(this->typeId + " dosent support + operator.");
}

TypeExpression* TypeExpression::opMinus(int typeId) {
	return new TypeError(this->typeId + " dosent support - operator.");
}

TypeExpression* TypeExpression::opDiv(int typeId) {
	return new TypeError(this->typeId + " dosent support ÷ operator.");
}

TypeExpression* TypeExpression::opMult(int typeId) {
	return new TypeError(this->typeId + " dosent support × operator.");
}

TypeExpression* TypeExpression::opMod(int typeId) {
	return new TypeError(this->typeId + " dosent support % operator.");
}