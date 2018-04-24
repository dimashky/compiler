#include "all.h"

TypeBoolean::TypeBoolean() {
	this->typeId = TYPE_BOOL;
	this->bytes = 1;
}

//static defifintion
TypeBoolean* TypeBoolean::instance = nullptr;

TypeBoolean* TypeBoolean::getInstance() {
	if (instance == nullptr) {
		instance = new TypeBoolean();
	}
	return instance;
}

std::string TypeBoolean::typeExpression() {
	return "BOOLEAN";
}

TypeExpression* TypeBoolean::operation(Operator op, TypeExpression* secondOperand) {
	int equivelant = TYPE_BOOL;
	
	if (secondOperand != nullptr) {
		equivelant = this->equivelantTo(secondOperand);
	}
	
	if (equivelant == TYPE_ERROR) {
		return new TypeError(this->typeExpression() + " is not equivelant to " + secondOperand->typeExpression());
	}
	else {
		switch (op)
		{
		case andand:
			return TypeBoolean::getInstance();
			break;
		case oror:
			return TypeBoolean::getInstance();
			break;
		case Equal:
			if (this->getTypeId() == secondOperand->getTypeId()) {
				return TypeBoolean::getInstance();
			}
			return new TypeError(this->typeExpression() + " is not equivelant to " + secondOperand->typeExpression() + " for assignment.");
			break;
		default:
			return new TypeError(this->typeExpression() + " has no predefined " + OperatorName[op] + " operation");
			break;
		}
	}
}

int TypeBoolean::equivelantTo(TypeExpression* secondOperand) {
	if (this == secondOperand || secondOperand->getTypeId() == TYPE_INTEGER || secondOperand->getTypeId() == TYPE_BOOL)
		return TYPE_BOOL;
	return TYPE_ERROR;
}