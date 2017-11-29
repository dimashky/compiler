#ifndef ATTRIBUTE_H
#define ATTRIBUTE_H
#include<bits/stdc++.h>
#include<string>
using namespace::std;
class Attribute
{
    public:
    Attribute(string type);
    virtual ~Attribute();
    bool add (string nameAtt) ;
    set<string> whatHave ;
    string typeKeyword ;

    static set<string > classModifiers;
	static set<string > methodModifiers;
	static set<string > virableModifiers ;
    bool errorDuplicate ;
    bool errorAccess  ;
    bool oneAccess ;
    bool errorAbstract ;
    bool errorStaticSealed ;
    bool errorPrivate ;
    bool errorConst ;

};

#endif // ATTRIBUTE_H
