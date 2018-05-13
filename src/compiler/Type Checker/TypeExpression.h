#pragma once
#include <string>
#include <vector>
#include "../AST/Operator.h"

class TypeExpression {
public:
	TypeExpression();
	
	// getters
	int getTypeId();
	int getBytes();

	// setters
	void setBytes(int);

	// return string representing the type expression of the type modeled, eg:"(int,float)->void"
	virtual std::string typeExpression();
	
	// Operation function
	virtual TypeExpression* operation(Operator op, TypeExpression* secondOperand = nullptr);

	//Type Equivelance
	virtual int equivelantTo(TypeExpression* secondOperand, bool);
	
protected:
	int bytes;
	int typeId;
};