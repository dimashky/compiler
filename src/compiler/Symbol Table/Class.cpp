#include "Class.h"

Class::Class(string name, string baseName, int line_no, int col_no) : Symbol(name,line_no,col_no)
{
	this->baseName = baseName;
	attribute = new Attribute(this->getType());
}

Class::~Class()
{

}

void Class::add_attribute(string s)
{
	attribute->add(s);
	return;
}
void Class::add_attribute(queue<string>attributes)
{
	while (!attributes.empty())
	{
		attribute->add(attributes.front());
		attributes.pop();
	}
	return;
}

string Class::getBaseName()
{
	return baseName;
}

string Class::getType()
{
	return "class";
}
