#include "LocalVariable.h"
LocalVariable::LocalVariable(string type_variable, string name, int line_no, int col_no) : Symbol(name, line_no, col_no)
{
	this->type_variable = type_variable;
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
LocalVariable::~LocalVariable()
{
}
