#include "Method.h"
Method::Method(queue<string>&modifiers, string type_variable, string name, queue<Parameter> types_ids_parameter, int line_no, int col_no) : Symbol(name, line_no, col_no)
{
	attribute = new Attribute(this->getType());
	this->type_variable = type_variable;
	add_attributes(modifiers);
}
void Method::add_attributes(queue<string>&attributes)
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
string Method::getType()
{
	return "method";
}
string Method::getType_name()
{
	return type_variable;
}
bool Method::is_final()
{
	return isFinal;
}
Method::~Method()
{
}
