#include "Interface.h"



Interface::Interface(string name, int line_no, int col_no) : Symbol(name,line_no,col_no)
{

}


Interface::~Interface()
{
}

string Interface::getType()
{
	return "interface";
}
