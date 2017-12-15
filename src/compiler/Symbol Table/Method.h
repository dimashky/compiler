#pragma once
#include<iostream>
#include<string>
#include<queue>
#include "Symbol.h"
#include "Attribute.h"
#include "symbolTable.h"
#include"Parameter.h"
using namespace::std;
class Method : public Symbol
{
private:
	Attribute* attribute;
	string type_variable;
	bool isFinal;
	queue<Parameter> types_ids_parameter;
	void check_if_duplicate_parameter();
public:

	Method(queue<string>&modifiers, string type_variable, string name, queue<Parameter> types_ids_parameter, int line_no, int col_no);
	string getType();
	string getType_name();
	queue<Parameter> get_types_ids_parameter(); 
	bool is_final();
	void add_attributes(queue<string>&attributes);
	~Method();

};

