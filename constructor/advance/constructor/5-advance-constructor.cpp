#include <iostream>
using namespace std;
// Constructor inheriting - inheriting constructor from base class

class baseClass
{
    int a;
    int b;

public:
    baseClass(int x) : a(x)
    {
        cout << "Base class constructor" << endl;
        cout << a << endl;
    }
};

// derived class

class derivedClass : public baseClass
{
    int numOne;
    int numTwo;

public:
    using baseClass::baseClass;
};

int main(void)
{
    derivedClass(10); 
}