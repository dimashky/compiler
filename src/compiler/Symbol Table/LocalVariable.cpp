#include "LocalVariable.h"

LocalVariable::LocalVariable(string type_variable, string name, int dimension, bool isParameter, bool is_const, int line_no, int col_no) : Symbol(name, line_no, col_no)

{
	this->type_variable = type_variable;
	this->isParameter = isParameter;
	this->type_ref = nullptr;
	this->is_const = is_const;
	this->dimension = dimension;
	this->initialized = false;
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

void LocalVariable::set_type(Symbol* type_ref)
{
	this->type_ref = type_ref;
	if (type_ref != nullptr)
		this->type_variable = this->type_ref->getName();
}

Symbol* LocalVariable::getTypeRef() {
	return this->type_ref;
}

LocalVariable::~LocalVariable()
{
}
