#pragma once
#include "Expression.h"

class AutoConst :public Expression
{
  public:
	  string type;
	  void* value;
	AutoConst(string type , void* value, Node* parent);
	 string getType() {
		return "auto";
	}

	 void print(int lev) {
		 cout << "lev " << lev << endl;
		 cout << *((int*)value) << endl;
	 }
	~AutoConst();
};

