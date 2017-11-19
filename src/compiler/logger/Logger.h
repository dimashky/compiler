#pragma once
#include<stack>
#include<string>
#include<vector>
#include <direct.h>

using namespace::std;
class Logger
{
private:
	stack<string> stprint;
	stack<int> subnodes;
	string file;
	FILE* nodeFile;
	FILE* edgeFile;
	int nodeCnt, edgeCnt;
public:
	Logger(string file);
	void a(string, int, bool err = false);
	void print();
};

