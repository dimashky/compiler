#include "all.h"
#include <string>

using namespace std;

TypeClass::TypeClass(string c) {
	this->name = c;
	this->typeId = TYPE_CLASS;
}

string TypeClass::typeExpression() {
	return this->name;
}

TypeExpression* TypeClass::operation(Operator op, TypeExpression* secondOperand = nullptr) {
	int equivelant = TYPE_CLASS;

	if (secondOperand != nullptr) {
		equivelant = this->equivelantTo(secondOperand);
	}

	if (equivelant == TYPE_ERROR) {
		return new TypeError(this->typeExpression() + " is not equivelant to " + secondOperand->typeExpression());
	}
	else {
		switch (op)
		{
		case Equal:
			return this;
			break;
		default:
			return new TypeError(this->typeExpression() + " has no predefined " + OperatorName[op] + " operation");
			break;
		}
	}
}

int TypeClass::equivelantTo(TypeExpression* secondOperand) {
	// check if second operand is class type and same name
	if (secondOperand->getTypeId() == TYPE_CLASS && this->typeExpression() == secondOperand->typeExpression()) {
		return TYPE_CLASS;
	}
	return TYPE_ERROR;
}