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
	virtual string getFullPath() {
		return "ERRRRRRRRRRRRRRR BECAUSE TRYING TO GET FULL PATH FROM NON TYPE LIKE METHOD ETC>>>>>>";
	}

	string getName();
	int getLineNo();
	int getColNo();
	void setName(string name) {
		this->name = name;
	}
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
