#pragma once
#include<iostream>
#include<string>
#include <vector>

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
	vector<Symbol*> divideName();
	virtual string getType();

	virtual Symbol* getTypeRef() {
		return nullptr;
	}

	void setColNo(int col_no) {
		this->col_no = col_no;
		return;
	}

	virtual bool isComplex() {
		return false;
	}

	~Symbol();

};
