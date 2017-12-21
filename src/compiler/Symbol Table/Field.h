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
public:

	Field(queue<string>&modifiers , string type_variable,string name, int line_no, int col_no);
    string getType();
	string get_type_name();
	void set_type(Symbol* type_ref)
	{
		this->type_ref = type_ref;
	}
	void add_attributes(queue<string>&attributes);
	~Field();

};

