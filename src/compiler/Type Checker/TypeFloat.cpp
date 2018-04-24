#include "all.h"

TypeFloat* TypeFloat::instance = nullptr;

TypeFloat::TypeFloat() {
	this->typeId = TYPE_FLOAT;
	this->bytes = 4;
}

TypeFloat* TypeFloat::getInstance() {
	if (instance == nullptr)
		instance = new TypeFloat();
	return instance;
}

std::string TypeFloat::typeExpression() {
	return "FLOAT";
}

TypeExpression* TypeFloat::operation(Operator op, TypeExpression* secondOperand) {
	int equivelant = TYPE_FLOAT;

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
			return TypeFloat::getInstance();
			break;
		case Minus:
			return TypeFloat::getInstance();
			break;
		case tilde:
			break;
		case post_plusplus:
			return TypeFloat::getInstance();
			break;
		case pre_plusplus:
			return TypeFloat::getInstance();
			break;
		case pre_minusminus:
			return TypeFloat::getInstance();
			break;
		case post_minusminus:
			return TypeFloat::getInstance();
			break;
		case star:
			return TypeFloat::getInstance();
			break;
		case slash:
			return TypeFloat::getInstance();
			break;
		case percent:
			return TypeFloat::getInstance();
			break;
		case power:
			return TypeFloat::getInstance();
			break;
		case ltlt:
			return TypeFloat::getInstance();
			break;
		case gtgt:
			return TypeFloat::getInstance();
			break;
		case Greater:
			return TypeBoolean::getInstance();
			break;
		case smaller:
			return TypeBoolean::getInstance();
			break;
		case geq:
			return TypeBoolean::getInstance();
			break;
		case leq:
			return TypeBoolean::getInstance();
			break;
		case noteq:
			return TypeBoolean::getInstance();
			break;
		case eqeq:
			return TypeBoolean::getInstance();
			break;
		case Equal:
			return TypeFloat::getInstance();
			break;
		case pluseq:
			return TypeFloat::getInstance();
			break;
		case minuseq:
			return TypeFloat::getInstance();
			break;
		case stareq:
			return TypeFloat::getInstance();
			break;
		case diveq:
			return TypeFloat::getInstance();
			break;
		case modeq:
			return TypeFloat::getInstance();
			break;
		case xoreq:
			return TypeFloat::getInstance();
			break;
		case andeq:
			return TypeFloat::getInstance();
			break;
		case oreq:
			return TypeFloat::getInstance();
			break;
		default:
			return new TypeError(this->typeExpression() + " has no predefined " + OperatorName[op] + " operation");
			break;
		}
	}
}


int TypeFloat::equivelantTo(TypeExpression* secondOperand) {
	if (secondOperand->getTypeId() == TYPE_INTEGER || secondOperand->getTypeId() == TYPE_FLOAT)
		return TYPE_FLOAT;
	return TYPE_ERROR;
}