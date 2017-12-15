#include "LocalVariable.h"
LocalVariable::LocalVariable(string type_variable, string name, bool isParameter, int line_no, int col_no) : Symbol(name, line_no, col_no)
{
	this->type_variable = type_variable;
	this->isParameter = isParameter;
}
string LocalVariable::getType()
{
	return "localvariable";
}
string LocalVariable::getType_name()
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
