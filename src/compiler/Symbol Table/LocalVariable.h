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
	bool isFinal, isParameter, is_const;
public:
	LocalVariable(string type_variable, string name, bool isParameter, bool is_const, int line_no, int col_no);
	string getType();
	string get_type_name();
	bool is_final();
	bool is_parameter();
	void set_type(Symbol* type_ref)
	{
		this->type_ref = type_ref;
	}
	~LocalVariable();

};

