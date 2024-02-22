#include <iostream>
using namespace std;

// function overriding run time polymorphism - late binding

class baseClass
{
public:
    virtual void func()
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

class thirdClass : public baseClass
{
public:
    void func()
    {
        cout << "third class function" << endl;
    }
};

int main(void)
{

    baseClass baseObj;
    derivedClass derivedObj;
    thirdClass thirdObj;
    baseClass *ptr[2];
    ptr[0] = &derivedObj; // late binding occurs
    ptr[1] = &thirdObj; // late binding occurs
    ptr[0]->func();
    ptr[1]->func();
}