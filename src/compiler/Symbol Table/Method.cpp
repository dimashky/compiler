#include "Method.h"

Method::Method(queue<string>&modifiers, string return_type, string name, int line_no, int col_no): Symbol(name, line_no, col_no)
{
	attribute = new Attribute(this->getType(),return_type,line_no,col_no);
	this->return_type = return_type;
	this->is_abstract = false;
	this->isFinal = false;
	this->is_static = false; 
	this->is_override = false;
	this->is_virtual = false; 
	this->is_public = false;
	this->is_private = true;
	this->is_protected = false;
	this->is_internal = false;
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

		if (attributes.front() == "PUBLIC")
			is_public = true, is_protected = is_private = is_internal = false;
		if (!is_public && attributes.front() == "PROTECTED")
			is_protected = true, is_private = false;
		if (!is_public && !is_private && attributes.front() == "INTERNAL")
			is_internal = true , is_public = is_private = false ; 
		if (!is_public && !is_protected && attributes.front() == "PRIVATE")
			is_private = true;


		attribute->add(attributes.front(),attributes.size());
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
