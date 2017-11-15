#include<stack>

#include "Logger.h"
#include<stack>
#include<string>
#include <fstream>
#include <iostream>
using namespace::std;


Logger::Logger(string file)
{
	ofstream outfile;
	outfile.open(file);
	this->file = file;
}
void Logger::a(string s)
{
	stprint.push(s);
	return;
}
void Logger::print()
{
	stack<string>pr = stprint;
	ofstream out;
	out.open(file);
	while (!pr.empty())
	{
		out << pr.top() << endl;
		pr.pop();
	}
	return;
}
Logger::~Logger()
{
}
