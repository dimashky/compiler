#include "Class.h"
#include "../Error Handler/error_handler.h"
extern errorHandler error_handler;

Class::Class(string name, int line_no, int col_no) : Symbol(name, line_no, col_no)
{
	attribute = new Attribute(this->getType());
	isFinal = false;
	is_public = false;
	is_private = true;
	is_protected = false;
	is_abstract = false;
	owner_is_namespace = false;
	type_graph_position = nullptr;
	baseClassImpInterfaces.push_back(make_pair("", nullptr));
}

Class::~Class()
{

}


void Class::add_attributes(queue<string>&attributes)
{
	while (!attributes.empty())
	{
		if (attributes.front() == "SEALED")
			isFinal = true;
		if (attributes.front() == "ABSTRACT")
			is_abstract = true;

		if (owner_is_namespace)
		{
			if (attributes.front() == "PROTECTED" || attributes.front() == "PRIVATE") {
				error_handler.add(error(getLineNo(), -1, "class error, elements defined in namespace cannot be private or protected."));
			}
		}
		else
		{
			if (attributes.front() == "PUBLIC")
				is_public = true, is_protected = is_private = false;
			if (!is_public && attributes.front() == "PROTECTED")
				is_protected = true, is_private = false;
			if (!is_public && !is_protected && attributes.front() == "PRIVATE")
				is_private = true;
		}

		attribute->add(attributes.front());
		attributes.pop();
	}
	return;
}

void Class::add_base(string name, symbolTable* ref)
{
	for (int i = 0;i < baseClassImpInterfaces.size();i++)
		if (baseClassImpInterfaces[i].first == name)
		{
			string m = "class error, '"+ name +"' already listed in interface list.";
			error_handler.add(error(getLineNo(), -1, m.c_str()));
			return;
		}
	baseClassImpInterfaces.push_back(make_pair(name, ref));

	return;
}

string Class::getType()
{
	return "class";
}
void Class::set_namespace_owner()
{
	owner_is_namespace = true;
	is_public = true;
	is_protected = is_private = false;
}

bool Class::is_final()
{
	return isFinal;
}
