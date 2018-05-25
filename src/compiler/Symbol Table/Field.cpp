#include "Field.h"
#include "Class.h"

Field::Field(queue<string>&modifiers , string type_variable, string name, int dimension, int line_no, int col_no, bool isConst) : Symbol(name, line_no, col_no)
{
	attribute = new Attribute(this->getType(),line_no ,col_no);
	this->type_variable = type_variable; 
	this->type_ref = nullptr;
	this->is_private = true;
	this->initialized = false;
	this->isStatic = false;
	this->dimension = dimension;
	this->isConst = isConst;
	this->readonly = false;
	add_attributes(modifiers);
	if (!this->isStatic) {
		this->offset = ((Class*)symbolTable::openBrackets.top()->get_owner())->bytes;
		((Class*)symbolTable::openBrackets.top()->get_owner())->bytes += 4;
	}
	else {
		/// TODO : handle static data member
	}
}

void Field::add_attributes(queue<string>attributes)
{
	while (!attributes.empty())
	{
		if (attributes.front() == "PUBLIC") {
			this->is_private = false;
			this->isPublic = true;
		}
		
		if (attributes.front() == "PROTECTED") {
			this->is_private = this->isPublic = false;
			this->isProtected = true;
		}
		
		if (attributes.front() == "STATIC") {
			isStatic = true;
		}

		if (!readonly && attributes.front() == "READONLY") {
			readonly = true;
		}
		attribute->add(attributes.front() , attributes.size() );
		attributes.pop();
	}
	return;
}

string Field::getType()
{
	return "field";
}

bool Field::get_is_private() {
	return this->is_private;
}

string Field::get_type_name()
{
	return type_variable;
}

void Field::set_type(Symbol* type_ref)
{
	this->type_ref = type_ref;
}

Symbol* Field::getTypeRef() {
	return this->type_ref;
}

Field::~Field()
{
}
