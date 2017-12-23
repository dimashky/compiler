#include "LocalVariable.h"
LocalVariable::LocalVariable(string type_variable, string name, bool isParameter,bool is_const, int line_no, int col_no) : Symbol(name, line_no, col_no)
{
	this->type_variable = type_variable;
	this->isParameter = isParameter;
	this->type_ref = nullptr;
	this->is_const = is_const;
}
string LocalVariable::getType()
{
	return "localvariable";
}
string LocalVariable::get_type_name()
{
	return type_variable;
}
bool LocalVariable::is_final()
{
	return isFinal;
}
bool LocalVariable::is_parameter()
{
	return isParameter; 
}

LocalVariable::~LocalVariable()
{
}
