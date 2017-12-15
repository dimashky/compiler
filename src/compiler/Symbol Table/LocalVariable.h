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
	bool isFinal,isParameter;
public:

	LocalVariable(string type_variable, string name,bool isParameter, int line_no, int col_no);
	string getType();
	string getType_name();
	bool is_final();
	bool is_parameter();
	~LocalVariable();

};

