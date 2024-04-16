#include <iostream>
using namespace std;
// static binding but this is not run time polymorphism
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

    baseClass baseObj;
    derivedClass derivedObj;

    baseObj.funcOne();
    derivedObj.funcOne();
    return 0;
}