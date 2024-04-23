#include <iostream>
using namespace std;

// class one - base class
class classOne
{
public:
   virtual void funcOne()
    {
        cout << "Function one - class one" << endl;
    }
};

// class two - inherit from class one
class classTwo : public classOne
{
public:
    void funcOne()
    {
        cout << "Function one - class two" << endl;
    }
};

int main()
{
    //with pointer
    classOne *onePtr;
    classTwo classTwoObj;

    onePtr = &classTwoObj;
    onePtr->funcOne();

  
    return 0;
}