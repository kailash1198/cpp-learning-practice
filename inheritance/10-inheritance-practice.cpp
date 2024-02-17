#include <iostream>
using namespace std;

//base class
class baseClass
{
private:
    int numOne;
    int numTwo;
    friend void funcOne(baseClass); //friend function declaration part

public:
    baseClass()
    {
        numOne = 10;
        numTwo = 20;
    }
};

//derived class
class derivedClass : public baseClass
{
public:
};

// friend function definition
void funcOne(baseClass object)
{
    object.numOne+=10;
    object.numTwo+=10;
    cout<<object.numOne<<endl;
    cout<<object.numTwo<<endl;
}

int main(void)
{
    // derivedClass obj1;
    // baseClass baseObj1;

    derivedClass obj2;
    funcOne(obj2);
}