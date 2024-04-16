#include <iostream>
using namespace std;
//This is run time polymorphism
class baseClass
{
public:
    virtual void funcOne()
    {
        cout << "This is base class function" << endl;
    }
};

class derivedClass : public baseClass
{
public:
    void funcOne()
    {
        cout << "This is derived class function" << endl;
    }
};

int main()
{
    baseClass *baseObj;
    derivedClass derivedObj;

    baseObj = &derivedObj;

    baseObj->funcOne();
    return 0;
}