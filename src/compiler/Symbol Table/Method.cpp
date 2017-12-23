#include "Method.h"

Method::Method(queue<string>&modifiers, string return_type, string name, int line_no, int col_no): Symbol(name, line_no, col_no)
{
	attribute = new Attribute(this->getType(),return_type);
	this->return_type = return_type;
	this->is_abstract = false;
	this->isFinal = false;
	this->is_static = false; 
	this->is_override = false;
	this->is_virtual = false; 
	add_attributes(modifiers);
	this->types_ids_parameter = types_ids_parameter; 
	

}

void Method::add_attributes(queue<string>&attributes)
{
	while (!attributes.empty())
	{
		if (attributes.front() == "SEALED")
			isFinal = true;
		if (attributes.front() == "STATIC")
			is_static = true;
		if (attributes.front() == "ABSTRACT")
			is_abstract = true;
		if (attributes.front() == "OVERRIDE")
			is_override = true;
		if (attributes.front() == "VIRTUAL")
			is_virtual = true;

		attribute->add(attributes.front());
		attributes.pop();
	}
	return;
}

string Method::getType()
{
	return "method";
}

string Method::get_return_type()
{
	return return_type;
}

bool Method::is_final()
{
	return isFinal;
}



vector<LocalVariable*>& Method::get_parameters()
{
	return types_ids_parameter; 
}

Method::~Method()
{
}
