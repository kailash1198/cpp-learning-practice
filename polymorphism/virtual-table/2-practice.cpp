#include <iostream>
using namespace std;
// base class
class baseClass
{
public:
    virtual void greeting()
    {
        cout << "Welcome - base class" << endl;
    }
};
// derived class
class derivedClass : public baseClass
{
public:
    virtual void greeting() override
    {
        cout << "Welcome - derived class" << endl;
    }
};
// another inherit from derived class
class newClass : public derivedClass
{
public:
    virtual void greeting() override
    {
        cout << "Welcome - new class" << endl;
    }
};

int main(void)
{
    baseClass *baseObj = new derivedClass();
    derivedClass *derivedObj = new derivedClass();

    baseObj->greeting();
    derivedObj->greeting();
}