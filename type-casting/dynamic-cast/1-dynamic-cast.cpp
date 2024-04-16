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
};

int main()
{
    baseClass *baseObj;

    baseObj = new derivedClass;

    // using dynamic cast base class to derived class
    derivedClass *derivedObj = dynamic_cast<derivedClass *>(baseObj);

    derivedObj->funcOne();
    return 0;
}