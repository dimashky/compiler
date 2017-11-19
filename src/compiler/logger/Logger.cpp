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
void Logger::a(string s, int subnodes_number, bool err)
{
	char* color = "#74bffc";
	
	if (err) color = "#f80000";

	if(subnodes_number != 0)
		fprintf(nodeFile, "{ id:%d, label:'%s', shape: 'box', color:'%s'},", nodeCnt, s.c_str(),color);
	else
		fprintf(nodeFile, "{ id:%d, label:'%s', shape: 'ellipse', color:'%s'},", nodeCnt, s.c_str(),color);
	if (subnodes_number != 0) { // non terminal node
		for (int i = 0;  i < subnodes_number - 1; ++i) {
			fprintf(edgeFile, "{from:%d,to:%d,id:'e%d', label: '%d', dashes:true},", nodeCnt, subnodes.top(), edgeCnt, edgeCnt);
			subnodes.pop();
			edgeCnt++;
		}
		fprintf(edgeFile, "{from:%d,to:%d,id:'e%d', label: '%d', dashes:true},", nodeCnt, nodeCnt - 1, edgeCnt, edgeCnt);
		edgeCnt++;
	}
	else if(subnodes_number == 0 && nodeCnt != 1){
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
	if (!subnodes.empty()) {
		printf("There some ERRORS with 'subnodes' stack: [ ");
		while (!subnodes.empty())
		{
			printf("%d ", subnodes.top());
			subnodes.pop();
		}
		printf("]\n");
	}
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
