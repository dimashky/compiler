#ifndef ATTRIBUTE_H
#define ATTRIBUTE_H
#include<bits/stdc++.h>
#include<string>
using namespace::std;
class Attribute
{
    public:
    Attribute(string type, int line_no, int col_no);
	Attribute(string type,string return_type,int lin_no,int col_no);
    virtual ~Attribute();
    bool add (string nameAtt,int sizeAtt) ;
    set<string> whatHave ;
    string typeKeyword ;
	string return_type; 
    static set<string > classModifiers;
	static set<string > methodModifiers;
	static set<string > fieldModifiers;
	static set<string > interfaceModifiers; 
    bool errorDuplicate ;
    bool errorAccess  ;
    bool oneAccess ;
    bool errorAbstract ;
    bool errorStaticSealed ;
    bool errorPrivate ;
    bool errorConst ;
	int col_no;
	int line_no;
};

#endif // ATTRIBUTE_H
