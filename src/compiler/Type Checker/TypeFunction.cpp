#include "all.h"
#include <string>
#include <vector>
#include <sstream>

TypeFunction::TypeFunction(std::vector<TypeExpression*>& paramsType, TypeExpression* returnType) {
	this->bytes = 0;
	for (auto param : paramsType) {
		this->bytes += param->getBytes();
	}
	this->bytes += returnType->getBytes();

	this->paramsType = paramsType;
	this->returnType = returnType;
	this->typeId = TYPE_FUNCTION;
}

std::string TypeFunction::typeExpression() {
	std::ostringstream output;
	if (this->paramsType.size()) {
		output << "(";
		for (unsigned i = 0; i < this->paramsType.size(); ++i) {
			output << this->paramsType[i]->typeExpression() << (i < this->paramsType.size() - 1 ? "," : ")");
		}
	}
	else {
		output << "(" << ")";
	}
	output << "->" << this->returnType->typeExpression();
	return output.str();
}

TypeExpression* TypeFunction::opBrackets(std::vector<TypeExpression*>& paramsType) {
	if (paramsType.size() != this->paramsType.size()) {
		return new TypeError("Parameters number not matched!");
	}
	for (int i = 0; i < paramsType.size(); i++) {
		if (paramsType[i] != this->paramsType[i]) {
			return new TypeError("Mismatch parameters type");
		}
	}
	return this->returnType;
}

TypeExpression* TypeFunction::getReturnType() {
	return this->returnType;
}

std::vector<TypeExpression*> TypeFunction::getParamsType() {
	return this->paramsType;
}

