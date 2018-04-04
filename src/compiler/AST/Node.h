#pragma once
#include<bits/stdc++.h>
using namespace std; 
class Node
{
protected:
	Node* parent;

public:
	
	static Node* current;

	Node(){}
		
	Node(Node* parent);
	
	static void setCurrent(Node* current);

	static void Up();

	
	virtual string getType() = 0;
	
	virtual void print(int lev) = 0;
	
	~Node();
};

