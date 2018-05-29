#pragma once
#ifndef ASMGENERATOR_H
#define ASMGENERATOR_H
#include <iostream>
#include <cstring>
#include <fstream>
#include <sstream>
#include "../AST/Operator.h"
#include <map>

using namespace std;

class AsmGenerator{
	static std::map<string, string> strings;
	static int stringCounter;
	static ofstream assembly_code_file;

public:
	
	static void preInitFile();

	static int labelCounter;

	static void printStr(string str);

	static stringstream main_stream;

	static void initializeFile(); 

	static void writeAsmFile();

	static void li(string reg, int value, bool isChar = false);

	static void operation(Operator operation, string const &dest_reg, string const &reg1, string const &reg2 = "");

	static void addLabel(string label_name);

	static void push(string source_register);

	static void pop(string destination_register);

	static void lw(string destination_register, string reference, int offset);

	static void sw(string source_register, string reference, int offset);

	static void addInstruction(string instruction);
	
	static void addString(string dest_reg, string value);

	static void comment(string comment_meesage);

	// System Calls
	static void systemCall(int systam_call_code);

	static void printString(string reg_string_address);

	static void printInt(int printed_int);

	static void printReg(string reg);

	static void printNewLine();

	static void f_print_reg(string reg);

	static void allocate(string dest_reg, int bytes);

	static void allocate(string dest_reg, string source_reg);

	static void move(string dest_reg ,string source_reg);
	static void f_move(string dest_reg ,string source_reg);
};

#endif