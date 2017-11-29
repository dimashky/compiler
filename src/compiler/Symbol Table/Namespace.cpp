#include "Namespace.h"



Namespace::Namespace(string name, int line_no, int col_no) : Symbol(name,line_no,col_no)
{

}


Namespace::~Namespace()
{
}

string Namespace::getType()
{
	return "namespace";
}
