#ifndef CLASSB_H
#define CLASSB_H

#include <string>

using namespace std;

class ClassB
{
public:
    ClassB();
    string getInfo();
    void setInfo(string);
private:
    string info_;
};

#endif // CLASSB_H
