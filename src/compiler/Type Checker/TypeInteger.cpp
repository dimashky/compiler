#include "all.h"

TypeInteger* TypeInteger::instance = nullptr;

TypeInteger::TypeInteger() {
	this->typeId = TYPE_INTEGER;
	this->bytes = 4;
}

TypeInteger* TypeInteger::getInstance() {
	if (!TypeInteger::instance) {
		TypeInteger::instance = new TypeInteger();
	}
	return TypeInteger::instance;
}

std::string TypeInteger::typeExpression() {
	return "INT";
}

TypeExpression* TypeInteger::operation(Operator op, TypeExpression* secondOperand) {
	int equivelant = TYPE_INTEGER;

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
			return TypeInteger::getInstance();
			break;
		case Minus:
			return TypeInteger::getInstance();
			break;
		case tilde:
			break;
		case post_plusplus:
			return TypeInteger::getInstance();
			break;
		case pre_plusplus:
			return TypeInteger::getInstance();
			break;
		case pre_minusminus:
			return TypeInteger::getInstance();
			break;
		case post_minusminus:
			return TypeInteger::getInstance();
			break;
		case star:
			return TypeInteger::getInstance();
			break;
		case slash:
			return TypeInteger::getInstance();
			break;
		case percent:
			return TypeInteger::getInstance();
			break;
		case power:
			return TypeInteger::getInstance();
			break;
		case ltlt:
			return TypeInteger::getInstance();
			break;
		case gtgt:
			return TypeInteger::getInstance();
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
			return TypeInteger::getInstance();
			break;
		case pluseq:
			return TypeInteger::getInstance();
			break;
		case minuseq:
			return TypeInteger::getInstance();
			break;
		case stareq:
			return TypeInteger::getInstance();
			break;
		case diveq:
			return TypeInteger::getInstance();
			break;
		case modeq:
			return TypeInteger::getInstance();
			break;
		case xoreq:
			return TypeInteger::getInstance();
			break;
		case andeq:
			return TypeInteger::getInstance();
			break;
		case oreq:
			return TypeInteger::getInstance();
			break;
		default:
			return new TypeError(this->typeExpression() + " has no predefined " + OperatorName[op] + " operation");
			break;
		}
	}
}


int TypeInteger::equivelantTo(TypeExpression* secondOperand, bool cast) {
	if (secondOperand->getTypeId() == TYPE_INTEGER)
		return TYPE_INTEGER;
	//if (secondOperand->getTypeId() == TYPE_FLOAT)
		//return TYPE_FLOAT;
	return TYPE_ERROR;
}

