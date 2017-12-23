#pragma once
#include<iostream>
#include<string>
#include "Symbol.h"
using namespace::std;

class Namespace : public Symbol
{
public:
	Namespace(string name, int line_no, int col_no);
	~Namespace();
	string getType();
};

