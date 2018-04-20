#include "Symbol.h"

#include <vector>

Symbol::Symbol(string name, int line_no, int col_no)
{
	this->name = name;
	this->line_no = line_no;
	this->col_no = col_no;
}


Symbol::~Symbol()
{

}

string Symbol::getType()
{
	return "symbol";
}

vector<Symbol*> Symbol::divideName() {
	vector<Symbol*> res;
	string s = this->name;
	string subStr;
	for (int i = 0;i < s.length;i++) {
		if (s[i] == '.') {
			res.push_back(new Symbol(subStr, this->line_no, -13));
			subStr = "";
		}
		else
			subStr += s[i];
	}
	res.push_back(new Symbol(subStr, this->line_no, -13));
	return res;
}

string Symbol::getName()
{
	return name;
}

int Symbol::getLineNo()
{
	return line_no;
}

int Symbol::getColNo()
{
	return col_no;
}

bool Symbol::compare(Symbol* comp)
{
	return this->name > comp->name;
}