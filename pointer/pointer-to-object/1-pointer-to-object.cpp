#include <iostream>
using namespace std;

class baseClass
{
public:
    void funcOne()
    {
        cout << "Function one in base class" << endl;
    }
};

class derivedClass : public baseClass
{
public:
    void funcTwo()
    {
        cout << "Function two from derived class" << endl;
    }
};

int main()
{
    baseClass *basePtr;
    derivedClass derivedObj;

    basePtr = &derivedObj;

    baseClass baseObj;
    basePtr = &baseObj;
    basePtr->funcOne();
    return 0;
}