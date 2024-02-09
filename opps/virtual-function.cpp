#include <iostream>
#include <string>
using namespace std;

class baseClass
{
private:
    int numOne;
    int numTwo;

public:
    virtual void greeting()
    {
        cout << "Welcome to program of base class" << endl;
    }

    void intro()
    {
        cout << "I am Kailash" << endl;
    }
};

class derivedClass : public baseClass
{
private:
    int a;

public:
    void greeting()
    {
        cout << "Welcome to program of Derived class" << endl;
    }
};

int main(void)
{

    baseClass baseObj1;
    derivedClass derivedObj1;
    // baseObj1.greeting();
    // derivedObj1.greeting();
    baseClass *basePointer;
    basePointer = &derivedObj1;
    basePointer->greeting(); // output derived class function because we defined virtual function in base class
    basePointer->intro();
}