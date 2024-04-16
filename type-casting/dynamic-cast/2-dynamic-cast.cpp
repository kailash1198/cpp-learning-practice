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
    // ▶️without dynamic cast
    //  derivedClass derivedObj
    //  baseObj = &derivedObj;
    //  baseObj->funcTwo();//error because you cannot access
    // ▶️if you want access then you need to change base class type to derived class using dynamic cast at run time
    baseObj = new derivedClass();
    derivedClass *derivedPtr = dynamic_cast<derivedClass*>(baseObj);

    derivedPtr->funcTwo();

    return 0;
}