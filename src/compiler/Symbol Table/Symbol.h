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

	virtual bool compare(Symbol* comp);

	string getName();
	int getLineNo();
	int getColNo();
	virtual string getType();

	~Symbol();

};
