#include <iostream>
using namespace std;
// virtual in inheritance
class baseClass
{
public:
    void baseFunc()
    {
        cout << "This is base class function" << endl;
    }
    virtual void funcOne()
    {
        cout << "This is virtual function-1" << endl;
    }
};

class childClass : virtual baseClass
{
public:
    void funcOne()
    {
        cout << "This is virtual function-2" << endl;
    }
};

class childClassTwo : virtual public baseClass
{
public:
    void childTwo()
    {
        cout << "This is child class two funnction call" << endl;
    }
};

class childfromChildTwo : virtual public childClassTwo, virtual childClass
{
public:
    void childFromChildTwoClass()
    {
        cout << "This is child class from child class two classs" << endl;
    }
};

int main(void)
{
    // baseClass obj1;
    // childClass obj2;
    // baseClass *ptr = &obj2;

    // ptr->funcOne();
    // ptr->funcOne();

    // childClassTwo obj;
    // obj.baseFunc();

    childfromChildTwo obj;
    // obj.baseFunc(); //error thats why we have to use virtual keyword for craete virtual class

    //after creating virtual class
    obj.baseFunc(); 
}