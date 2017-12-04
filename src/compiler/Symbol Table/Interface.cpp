#include "Interface.h"


#include "Class.h"

Interface::Interface(string name, queue<string>attributes, int line_no, int col_no) : Symbol(name, line_no, col_no)
{
	attribute = new Attribute(this->getType());

	add_attributes(attributes);
}

Interface::~Interface()
{

}


void Interface::add_attributes(queue<string>attributes)
{
	while (!attributes.empty())
	{
		attribute->add(attributes.front());
		attributes.pop();
	}
	return;
}

void Interface::add_base(string name, Symbol* ref)
{
	impInterfaces.push_back(make_pair(name, ref));
	return;
}

string Interface::getType()
{
	return "interface";
}
