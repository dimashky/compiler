#include "Interface.h"

Interface::Interface(string name, int line_no, int col_no) : Symbol(name, line_no, col_no)
{
	attribute = new Attribute(this->getType());
	is_public = false;
	is_private = true;
	is_protected = false;
	owner_is_namespace = false;

}

Interface::~Interface()
{

}


void Interface::add_base(string name, symbolTable* ref)
{
	for (int i = 0;i < impInterfaces.size();i++)
		if (impInterfaces[i].first == name)
		{
			cout << "error : " << name << " already listed in interface list." << endl;
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
				cout << "error : there is an error in line " << getLineNo() << ", elements defined in namespace cannot be private or protected." << endl;
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


void Interface::set_namespace_owner()
{
	owner_is_namespace = true;
	is_public = true;
	is_protected = is_private = false;
}
