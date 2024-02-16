#include <iostream>
#include <string>
using namespace std;

class baseClass
{
private:
    int a;
    int b;

public:
    baseClass()
    {
        a = 100;
        b = 200;
        cout << "Destructor content" << endl;
    }

    void displayBase()
    {
        cout << "This is base class" << endl;
        cout << a << endl;
        cout << b << endl;
    }
};

class derivedClassOne : public baseClass
{
private:
    int c;
    int d;

public:
    derivedClassOne()
    {
        cout << "This is derived class-1 CONSTRUCTOR" << endl;
    }
    void greetDerived()
    {
        cout << "Welcome to derived class" << endl;
    };

    // ~derivedClassOne();
};

class derivedClassTwo : public baseClass
{
public:
    void displayDerivedTwo()
    {
        cout << "This is derived class-2" << endl;
    }
};

class derivedClassThree : public baseClass
{
public:
    void displayDerivedThree()
    {
        cout << "This is derived class-3" << endl;
    }
};

class derivedFromDerivedOne : public derivedClassOne
{
public:
    void displayDerivedFromClassOne()
    {
        cout << "This is derived from derived class-1" << endl;
    }
};
int main(void)
{

    // derivedClassOne obj1;
    // obj1.displayFunc();
    // obj1.greet();

    // derivedClassTwo obj1;
    // derivedClassThree obj1;

    // derivedFromDerivedOne obj1;
    // obj1.displayDerivedFromClassOne();
}