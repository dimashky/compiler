#include "Field.h"

Field::Field(queue<string>&modifiers , string type_variable, string name, int line_no, int col_no) : Symbol(name, line_no, col_no)
{
	attribute = new Attribute(this->getType(),line_no ,col_no);
	this->type_variable = type_variable; 
	this->type_ref = nullptr;
	add_attributes(modifiers);
}

void Field::add_attributes(queue<string>&attributes)
{
	while (!attributes.empty())
	{
		attribute->add(attributes.front() , attributes.size() );
		attributes.pop();
	}
	return;
}

string Field::getType()
{
	return "field";
}

string Field::get_type_name()
{
	return type_variable;
}

Field::~Field()
{
}
