#pragma once
#include "all.h"

class TypeArray : public TypeExpression {
public:
	TypeArray(TypeExpression*, int);
	string typeExpression();

	int getDimension();
	TypeExpression* getOf();

	TypeExpression* operation(Operator op, TypeExpression* secondOperand);
	int equivelantTo(TypeExpression* secondOperand, bool cast = false);

private:
	// number of elements
	int dimension;
	// Type Expression of its elements
	TypeExpression* elementType;
};