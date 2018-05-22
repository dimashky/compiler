#include "all.h"
#include <iostream>
#include <string>

TypeString::TypeString() {
	this->typeId = TYPE_STRING;
	this->bytes = 255;
}

TypeString* TypeString::instance = nullptr;

TypeString* TypeString::getInstance() {
	if (TypeString::instance == nullptr) {
		TypeString::instance = new TypeString();
	}
	return TypeString::instance;
}

std::string TypeString::typeExpression() {
	return "STRING";
}

TypeExpression* TypeString::operation(Operator op, TypeExpression* secondOperand) {
	int equivelant = TYPE_STRING;

	if (secondOperand != nullptr) {
		equivelant = this->equivelantTo(secondOperand);
	}

	if (equivelant == TYPE_ERROR) {
		return new TypeError(this->typeExpression() + " is not equivelant to " + secondOperand->typeExpression());
	}
	else {
		switch (op)
		{
		case Plus:
			return  TypeString::getInstance();
			break;
		case eqeq:
			return  TypeBoolean::getInstance();
			break;
		case Equal:
			return  TypeString::getInstance();
			break;
		default:
			return new TypeError(this->typeExpression() + " has no predefined " + OperatorName[op] + " operation");
			break;
		}
	}
}

int TypeString::equivelantTo(TypeExpression* secondOperand, bool cast) {
	if (secondOperand->getTypeId() == TYPE_STRING || secondOperand->getTypeId() == TYPE_CHAR)
		return TYPE_STRING;
	return TYPE_ERROR;
}
