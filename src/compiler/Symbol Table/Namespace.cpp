#include "Namespace.h"



Namespace::Namespace(string name, int line_no, int col_no) : Symbol(name,line_no,col_no) { }


Namespace::~Namespace()
{
}

string Namespace::getFullPath() {
	return ((symbolTable*)type_graph_position->stPTR)->getFullPath();
}

string Namespace::getType()
{
	return "namespace";
}
