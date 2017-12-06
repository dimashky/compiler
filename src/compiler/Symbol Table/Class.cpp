#include "Class.h"

Class::Class(string name, queue<string>attributes, int line_no, int col_no) : Symbol(name,line_no,col_no)
{
	attribute = new Attribute(this->getType());
	isFinal = false;
	add_attributes(attributes);
}

Class::~Class()
{

}


void Class::add_attributes(queue<string>attributes)
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

void Class::add_base(string name, Symbol* ref)
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
bool Class::is_final() {
	return isFinal;
}
