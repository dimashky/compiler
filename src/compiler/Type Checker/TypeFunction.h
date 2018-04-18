#pragma once
#include "all.h"
#include <string>
#include <vector>

class TypeFunction : public TypeExpression {
public:
	TypeFunction(std::vector<TypeExpression*>&, TypeExpression*);
	std::string typeExpression();

	// getter
	TypeExpression* getReturnType();
	std::vector<TypeExpression*> getParamsType();

	TypeExpression* opBrackets(std::vector<TypeExpression*>&);
private:
	TypeExpression* returnType;
	std::vector<TypeExpression*> paramsType;
};