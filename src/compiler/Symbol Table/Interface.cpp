#include "Interface.h"
#include "../Error Handler/error_handler.h"
extern errorHandler error_handler;

Interface::Interface(string name, int line_no, int col_no) : Symbol(name, line_no, col_no)
{
	attribute = new Attribute(this->getType(),line_no , col_no);
	is_public = false;
	is_private = true;
	is_protected = false;
	owner_is_namespace = false;
	type_graph_position = nullptr;
}

Interface::~Interface()
{

}


void Interface::add_base(string name, symbolTable* ref)
{
	for (int i = 0;i < impInterfaces.size();i++)
		if (impInterfaces[i].first == name)
		{
			string m = "interface error, "+ name + " already listed in interface list.";
			error_handler.add(error(getLineNo(), -1, m.c_str()));
			return;
		}
	impInterfaces.push_back(make_pair(name, ref));
	return;
}

string Interface::getType()
{
	return "interface";
}



void Interface::add_attributes(queue<string>&attributes)
{
	while (!attributes.empty())
	{

		if (owner_is_namespace)
		{
			if (attributes.front() == "PROTECTED" || attributes.front() == "PRIVATE")
				error_handler.add(error(getLineNo(), -1, "interface error, elements defined in namespace cannot be private or protected."));
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

		attribute->add(attributes.front(), attributes.size());
		attributes.pop();
	}
	return;
}


void Interface::set_namespace_owner()
{
	owner_is_namespace = true;
	is_public = true;
	is_protected = is_private = false;
}
