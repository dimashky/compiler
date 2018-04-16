#pragma once
#include <string>

class TypeExpression {
public:
	TypeExpression();
	
	// getters
	int getTypeId();
	int getBytes();

	// setters
	void setBytes(int);

	// return string representing the type expression of the type modeled, eg:"(int,float)->void"
	std::string typeExpression();
	
	// operations
	/// TODO: opDot 

	virtual TypeExpression* opPlus(int);
	virtual TypeExpression* opMinus(int);
	virtual TypeExpression* opMult(int);
	virtual TypeExpression* opDiv(int);
	virtual TypeExpression* opMod(int);
	virtual TypeExpression* opExp(int);

	virtual TypeExpression* opGreaterThan(int);
	virtual TypeExpression* opLessThan(int);
	virtual TypeExpression* opGreaterOrEq(int);
	virtual TypeExpression* opLessOrEq(int);

	virtual TypeExpression* opAnd(int);
	virtual TypeExpression* opOr(int);
	virtual TypeExpression* opEqual(int);

	virtual TypeExpression* opSqrBrackets(TypeExpression*); // []

	virtual TypeExpression* opBrackets(TypeExpression**);	// () 

	//Type Equivelance
	virtual int equivelantTo(int);
	
protected:
	int bytes;
	int typeId;
};