#include <iostream>
#include <typeinfo>
using namespace std;
// RTTI - real time type information
// RTTI (Run-time type information) is a mechanism that exposes information about an object’s data type at runtime and is available only for the classes which have at least one virtual function. It allows the type of an object to be determined during program execution.

class baseClass
{
public:
    virtual void func()
    {
        cout << "This is base class virtual function" << endl;
    }
};

class derivedClass : public baseClass
{
    void drivedFunc()
    {
        cout << "This is derived class" << endl;
    }
};

int main(void)
{
    // baseClass *obj;
    // obj = new derivedClass();
    // cout << obj->func();                 // error occur, because you trying to change type without RTTI.
    // cout << typeid(*obj).name() << endl; // run time type changed means base class changed type to derived class type

    baseClass *basePtr = new derivedClass();
    derivedClass *derivedPtr = dynamic_cast<derivedClass*>(basePtr); //base class converted with derived class
}