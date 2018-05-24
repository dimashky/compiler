#pragma once
#include<iostream>
#include<string>
#include<queue>
#include "Symbol.h"
#include "Attribute.h"
#include "symbolTable.h"
using namespace::std;
class LocalVariable : public Symbol
{
private:
	string type_variable;
	Symbol* type_ref;
	
	/*
	*	0		   => variable
	*	1 and more => array
	*/
	int dimension;

	bool isFinal,isParameter,is_const;
	bool initialized;
public:
	LocalVariable(string type_variable, string name, int dimension, bool isParameter, bool is_const, int line_no, int col_no);
	
	void set_type(Symbol* type_ref);
	void setInitializedStatus(bool initialized = true) {
		this->initialized = initialized;
	}

	string getType();
	string get_type_name();
	Symbol* getTypeRef();

	bool is_final();
	bool is_parameter();
	bool isInitialized() {
		return this->initialized;
	}

	bool isComplex() {
		/// TODO: add if
		return type_ref != nullptr;
	}

	bool getIsConst() {
		return this->is_const;
	}

	int getDimension() {
		return this->dimension;
	}

	void set_type_name(string type) {
		this->type_variable = type;
	}

	~LocalVariable();

};

