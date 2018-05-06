#include "all.h"
#include <string>
#include "../Symbol Table/symbolTable.h"
#include "../Symbol Table/Class.h"

using namespace std;

TypeClass::TypeClass(string c) {
	this->name = c;
	this->typeId = TYPE_CLASS;
	this->bytes = 4; // by default
}

string TypeClass::typeExpression() {
	return this->name;
}

TypeExpression* TypeClass::operation(Operator op, TypeExpression* secondOperand = nullptr) {
	int equivelant = TYPE_CLASS;

	if (secondOperand != nullptr && op != Operator::Is) {
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
		case Is:
			return TypeBoolean::getInstance();
			break;
		default:
			return new TypeError(this->typeExpression() + " has no predefined " + OperatorName[op] + " operation");
			break;
		}
	}
}

int TypeClass::equivelantTo(TypeExpression* secondOperand) {
	// check if second operand is class type and same name
	auto currSymbol = TypesTable::getType(this->name).second;
	auto secondSymbol = TypesTable::getType(secondOperand->typeExpression()).second;
	
	if (secondOperand->getTypeId() == TYPE_CLASS && (this->typeExpression() == secondOperand->typeExpression() || (currSymbol && secondSymbol && symbolTable::isParent((Class*)secondSymbol, (Class*)currSymbol)))) {
		return TYPE_CLASS;
	}
	return TYPE_ERROR;
}