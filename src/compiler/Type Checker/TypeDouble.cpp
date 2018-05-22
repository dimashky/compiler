#include "all.h"

TypeDouble* TypeDouble::instance = nullptr;

TypeDouble::TypeDouble() {
	this->typeId = TYPE_DOUBLE;
	this->bytes = 4;
}

TypeDouble* TypeDouble::getInstance() {
	if (instance == nullptr)
		instance = new TypeDouble();
	return instance;
}

std::string TypeDouble::typeExpression() {
	return "DOUBLE";
}

TypeExpression* TypeDouble::operation(Operator op, TypeExpression* secondOperand) {
	int equivelant = TYPE_DOUBLE;

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
			return TypeDouble::getInstance();
			break;
		case Minus:
			return TypeDouble::getInstance();
			break;
		case tilde:
			break;
		case post_plusplus:
			return TypeDouble::getInstance();
			break;
		case pre_plusplus:
			return TypeDouble::getInstance();
			break;
		case pre_minusminus:
			return TypeDouble::getInstance();
			break;
		case post_minusminus:
			return TypeDouble::getInstance();
			break;
		case star:
			return TypeDouble::getInstance();
			break;
		case slash:
			return TypeDouble::getInstance();
			break;
		case percent:
			return TypeDouble::getInstance();
			break;
		case power:
			return TypeDouble::getInstance();
			break;
		case ltlt:
			return TypeDouble::getInstance();
			break;
		case gtgt:
			return TypeDouble::getInstance();
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
			return TypeDouble::getInstance();
			break;
		case pluseq:
			return TypeDouble::getInstance();
			break;
		case minuseq:
			return TypeDouble::getInstance();
			break;
		case stareq:
			return TypeDouble::getInstance();
			break;
		case diveq:
			return TypeDouble::getInstance();
			break;
		case modeq:
			return TypeDouble::getInstance();
			break;
		case xoreq:
			return TypeDouble::getInstance();
			break;
		case andeq:
			return TypeDouble::getInstance();
			break;
		case oreq:
			return TypeDouble::getInstance();
			break;
		default:
			return new TypeError(this->typeExpression() + " has no predefined " + OperatorName[op] + " operation");
			break;
		}
	}
}


int TypeDouble::equivelantTo(TypeExpression* secondOperand, bool cast) {
	if (secondOperand->getTypeId() == TYPE_INTEGER || secondOperand->getTypeId() == TYPE_DOUBLE || secondOperand->getTypeId() == TYPE_FLOAT)
		return TYPE_DOUBLE;
	return TYPE_ERROR;
}