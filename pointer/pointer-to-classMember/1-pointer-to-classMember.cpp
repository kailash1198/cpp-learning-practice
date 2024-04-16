#include <iostream>
using namespace std;

class baseClass
{

public:
    int numOne;
    int numTwo;

    void funcOne()
    {
        cout << "Function one from base class" << endl;
    }
};

int main()
{
    baseClass baseObj;
    baseObj.numOne = 10;
    baseObj.numTwo = 20;
    baseObj.funcOne();

    // pointer to data member
    int baseClass::*ptrMember = &baseClass::numOne;
    cout<<baseObj.*ptrMember<<endl;

    return 0;
}