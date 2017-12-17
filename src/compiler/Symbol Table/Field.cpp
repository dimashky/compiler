#include "Field.h"
Field::Field(queue<string>&modifiers , string type_variable, string name, int line_no, int col_no) : Symbol(name, line_no, col_no)
{
	attribute = new Attribute(this->getType());
	this->type_variable = type_variable; 
	add_attributes(modifiers);
}
void Field::add_attributes(queue<string>&attributes)
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
string Field::getType()
{
	return "field";
}
string Field::getType_name()
{
	return type_variable;
}
bool Field::is_final()
{
	return isFinal;
}
Field::~Field()
{
}
