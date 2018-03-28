#pragma once
#include "../Node.h"
#include<bits/stdc++.h>
using namespace std;
enum  Type
{
	UNDEF, BOOL,SBYTE,BYTE,SHORT,USHORT,
	INT,UINT, LONG, ULONG, CHAR, FLOAT, 
	DOUBLE,OBJECT, STRING
};
class Object : public Node
{
protected :
	string name;
    Type type;

public:
	Object();
	Object(Type type, string name);
	~Object();
};

