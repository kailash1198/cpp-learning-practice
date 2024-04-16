#include <iostream>
using namespace std;
//early binding but not run time polymorphism.
class baseClass
{
public:
    void funcOne()
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
    baseClass *baseObjPtr;
    derivedClass derivedObj;

    baseObjPtr = &derivedObj;

    baseObjPtr->funcOne(); // early binding

    return 0;
}