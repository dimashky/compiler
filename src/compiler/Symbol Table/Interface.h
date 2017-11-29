#pragma once
#include<iostream>
#include<string>
#include "Symbol.h"
using namespace::std;

class Interface : public Symbol
{
public:
	Interface(string name, int line_no, int col_no);
	~Interface();
	string getType();
};

