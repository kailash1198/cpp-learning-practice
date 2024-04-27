#include <iostream>
using namespace std;
// Static polymorphism

class baseClass
{
public:
    void funcOne()
    {
        cout << "This is base class function call-1" << endl;
    }
    void funcOne(int a)
    {
        cout << "This is base class function call-2" << endl;
    }
};

int main()
{
    baseClass baseObj;

    baseObj.funcOne();
    baseObj.funcOne(10);
    return 0;
}