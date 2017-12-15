#include "Method.h"
Method::Method(queue<string>&modifiers, string type_variable, string name, queue<Parameter> types_ids_parameter, int line_no, int col_no) : Symbol(name, line_no, col_no)
{
	attribute = new Attribute(this->getType());
	this->type_variable = type_variable;
	add_attributes(modifiers);
	this->types_ids_parameter = types_ids_parameter; 
	check_if_duplicate_parameter();
}
void Method::check_if_duplicate_parameter()
{
	queue<Parameter> temp = types_ids_parameter;
	set<string> is_duplicate;
	while (!temp.empty())
	{
		set<string>::iterator it = is_duplicate.find(temp.front().name);
		if (is_duplicate.size() != 0 && it != is_duplicate.end())
		{
			cout << "error : there is an error in line " << this->getLineNo()<< " The parameter name '"<<temp.front().name<<"' is a duplicate." << endl;

		}
		is_duplicate.insert(temp.front().name);
		temp.pop();
	}
}
void Method::add_attributes(queue<string>&attributes)
{
	while (!attributes.empty())
	{
		if (attributes.front() == "SEALED")
			isFinal = true;
		attribute->add(attributes.front());
		attributes.pop();
	}
	return;
}
string Method::getType()
{
	return "method";
}
string Method::getType_name()
{
	return type_variable;
}
bool Method::is_final()
{
	return isFinal;
}
queue<Parameter> Method::get_types_ids_parameter()
{
	return types_ids_parameter; 
}

Method::~Method()
{
}
