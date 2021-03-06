#pragma once
#include<iostream>
#include<string>
#include<queue>
#include "Symbol.h"
#include "Attribute.h"
#include "symbolTable.h"
using namespace::std;
class Field : public Symbol
{
private:
	Attribute* attribute;
	string type_variable;
	Symbol* type_ref;
	bool is_private, initialized,isConst,isStatic,readonly,isPublic,isProtected;
	int dimension;
	string path;
public:
	Field(queue<string>&modifiers, string type_variable, string name, int dimension, int line_no, int col_no, bool isConst = false);
    
	void add_attributes(queue<string>attributes);

	void setFullPath(string path) {
		this->path = path;
	}
	string getFullPath() {
		return path;
	}

	void set_type(Symbol* type_ref);
	void setInitializedStatus(bool initialized = true) {
		this->initialized = initialized;
	}

	string getType();
	bool get_is_private();
	string get_type_name();
	Symbol* getTypeRef();
	bool isInitialized() {
		return this->initialized;
	}
	bool getIsConst() {
		return this->isConst;
	}
	bool isComplex() {
		return type_ref != nullptr;
	}
	bool getIsStatic() {
		return isStatic;
	}

	bool getIsReadonly() {
		return this->readonly;
	}

	int getDimension() {
		return this->dimension;
	}
	~Field();

};

