#include <iostream>
using namespace std;

class baseClass
{
public:
    void funcOne()
    {
        cout << "This is function one from base class" << endl;
    }
};

class secondClass:public baseClass
{
public:
    void funcOne()
    {
        cout << "Function two from secondary class" << endl;
    }
};

int main()
{
    baseClass baseObj;
    secondClass secondObj;

    baseObj.funcOne();
    secondObj.funcOne();

    return 0;
}
