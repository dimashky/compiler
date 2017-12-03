#include "Class.h"

Class::Class(string name, queue<string>attributes, int line_no, int col_no) : Symbol(name,line_no,col_no)
{
	attribute = new Attribute(this->getType());

	add_attributes(attributes);
	

}

Class::~Class()
{

}


void Class::add_attributes(queue<string>attributes)
{
	while (!attributes.empty())
	{
		attribute->add(attributes.front());
		attributes.pop();
	}
	return;
}

void Class::add_base(string name, Symbol* ref)
{
	baseClassImpInterfaces.push_back(make_pair(name,ref));
	return;
}

string Class::getType()
{
	return "class";
}
