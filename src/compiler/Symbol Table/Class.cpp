#include "Class.h"

Class::Class(string name, int line_no, int col_no) : Symbol(name,line_no,col_no)
{
	attribute = new Attribute(this->getType());
	isFinal = false;
	is_public = false;
	is_private = true;
	is_protected = false;
	owner_is_namespace = false;
	type_graph_position = nullptr;
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

void Class::add_base(string name, symbolTable* ref)
{
	for (int i = 0;i < baseClassImpInterfaces.size();i++)
		if (baseClassImpInterfaces[i].first == name)
		{
			cout << "error : " << name << " already listed in interface list." << endl;
			return;
		}
	baseClassImpInterfaces.push_back(make_pair(name,ref));
	
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
