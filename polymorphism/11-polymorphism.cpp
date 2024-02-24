#include <iostream>
using namespace std;

// run time polymorphism
class baseClass
{
public:
    virtual void funcOne(int a, int b)
    {
        cout << "This is base class function call" << endl;
        cout << "Data: " << a << " " << b << endl;
    }
};

class derivedClass : public baseClass
{
public:
    void funcOne(int a, int b)
    {
        cout << "This is derived class function call" << endl;
        cout << "Data: " << a << " " << b << endl;
    }
};

class derivedTwo : public baseClass
{
public:
    void funcOne(int a, int b)
    {
        cout << "This is derived class TWO function call" << endl;
        cout << "Data: " << a << " " << b << endl;
    }
};

int main(void)
{
    baseClass *basePtr[2];

    derivedClass derivedObj;
    derivedTwo derivedTwoObj;
    basePtr[0] = &derivedObj;
    basePtr[1] = &derivedTwoObj;
    basePtr[0]->funcOne(200, 400);
    basePtr[1]->funcOne(2, 4);
}