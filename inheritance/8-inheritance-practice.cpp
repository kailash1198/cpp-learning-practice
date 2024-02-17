#include <iostream>
using namespace std;

class baseClass
{

public:
    baseClass()
    {
        cout << "Base class constructor" << endl;
    }

    ~baseClass()
    {
        cout << "Base class destructor" << endl;
    }
};

class derived : public baseClass
{
public:
    derived()
    {
        cout << "Derived class constructor call" << endl;
    }

    ~derived()
    {
        cout << "Derived class destructor call" << endl;
    }
};

int main(void)
{
    derived obj1;
}