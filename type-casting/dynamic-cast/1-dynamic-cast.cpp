#include <iostream>
using namespace std;
// Dynamic cast - change type at run time of the program

class baseClass
{
public:
    virtual void funcOne()
    {
        cout << "Base class function" << endl;
    }
};

class derivedClass : public baseClass
{
public:
    void funcOne()
    {
        cout << "Derived class function" << endl;
    }

    void funcTwo()
    {
        cout << "This is function two in derived class" << endl;
    }
};

int main()
{
    baseClass *baseObj;

    baseObj = new derivedClass();

    // baseObj->funcTwo(); //this is error because you are not use dynamic cast //You cannot access derived class function using base class pointer // This is the reason we use dynamic cast

    // using dynamic cast base class to derived class for access functionTwo() in derived class
    derivedClass *derivedObj = dynamic_cast<derivedClass *>(baseObj);
    if (derivedObj)
    {
        derivedObj->funcOne();
        derivedObj->funcTwo();
    }
    else
    {
        cout << "Not converted" << endl;
    }

    return 0;
}