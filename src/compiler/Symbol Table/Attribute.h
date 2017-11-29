#ifndef ATTRIBUTE_H
#define ATTRIBUTE_H
#include<iostream>
#include<string>
#include<vector>
#include<set>
using namespace std;
using namespace::std;
class Attribute
{
    public:
    Attribute(string type);
    virtual ~Attribute();
    void addAttribute (string nameAtt);
    set<string> whatHave ;
    string typeKeyword ;

    set<string > classModifiers;
    set<string > methodModifiers;
    set<string > virableModifiers ;
    bool errorDuplicate ;
    bool errorAccess  ;
    bool oneAccess ;
    bool errorAbstract ;
    bool errorStaticSealed ;

};

#endif // ATTRIBUTE_H
