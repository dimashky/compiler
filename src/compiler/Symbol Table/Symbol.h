#pragma once
#include<iostream>
#include<string>
using namespace::std;
class Symbol
{
private:
	int line_no, col_no;
	string name;
public:
	Symbol(string name, int line_no, int col_no);
	~Symbol();
	virtual string getType();
	string getName();
	int getLineNo();
	int getColNo();
	virtual bool compare(Symbol* comp)
	{
		return this->name > comp->name;
	}
	
};
