#pragma once
#include<stack>
#include<string>
using namespace::std;
class Logger
{
private:
	stack<string> stprint;
	string file;
public:
	Logger(string file);
	void a(string s);
	void print();
	~Logger();
};

