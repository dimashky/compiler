#include "Logger.h"

#include <fstream>
#include <iostream>


Logger::Logger(string file)
{
	ofstream outfile;
	outfile.open(file);
	this->file = file;
	this->nodeCnt = 1;
	this->edgeCnt = 1;
	this->nodeFile = fopen("visually output/js/nodes.js", "w");
	this->edgeFile = fopen("visually output/js/edges.js", "w");
	fprintf(nodeFile, "var nodes = [");
	fprintf(edgeFile, "var edges = [");
}
void Logger::a(string s, int subnodes_number)
{
	fprintf(nodeFile, "{ id:%d, label:'%s'},", nodeCnt, s.c_str());
	if (subnodes_number != 0) { // non terminal node
		for (int i = 0; subnodes.size() > 0 && i < subnodes_number - 1; ++i) {
			fprintf(edgeFile, "{from:%d,to:%d,id:'e%d'},", nodeCnt, subnodes.top(), edgeCnt);
			subnodes.pop();
			edgeCnt++;
		}
		fprintf(edgeFile, "{from:%d,to:%d,id:'e%d'},", nodeCnt, nodeCnt - 1, edgeCnt);
		edgeCnt++;
	}
	else {
		subnodes.push(nodeCnt - 1);
	}
	nodeCnt++;
	stprint.push(s);
	return;
}
void Logger::print()
{
	fprintf(nodeFile, "];");
	fprintf(edgeFile, "];");
	fclose(nodeFile);
	fclose(edgeFile);
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
