#pragma once
#include<bits/stdc++.h>
using namespace std; 
class Node
{
protected:
	Node* parent;

public:
	Node(){}
	static Node* current;
	Node(Node* parent);
	static void setCurrent(Node* current) {
		Node::current = current;
	}
	static void Up() {
		if(Node::current != nullptr)
		Node::current = Node::current->parent;
	}
	virtual string getType() = 0;
	virtual void print(int lev) = 0;
	~Node();
};

