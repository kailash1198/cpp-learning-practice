#include <iostream>
using namespace std;

// function overriding run time polymorphism - early binding

class baseClass
{
public:
    void func()
    {
        cout << "Base class function" << endl;
    }
};

class derivedClass : public baseClass
{
public:
    void func()
    {
        cout << "Derived class function" << endl;
    }
};

int main(void)
{
    baseClass *ptr;

    baseClass baseObj;
    derivedClass derivedObj;
    ptr = &derivedObj;
    ptr->func();
}