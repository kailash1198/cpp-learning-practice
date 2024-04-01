#include <iostream>
using namespace std;

// Virtual Table - VMT (Virtual method tables) is a technique for dynamic polymorphism at run time.

// It is a table of function pointer that is created for each class that has a virtual function
// This is contain address of virtual function of that class
// When virtual function call on an object then the compiler uses the virtual table to determine which function to call

class class_one
{
public:
    virtual void funcOne()
    {
        cout << "This is class - one function" << endl;
    }
};

class class_two : public class_one
{
public:
    virtual void funcOne() override
    {
        cout << "This is class - two function" << endl;
    }
};

class class_three : public class_one
{
public:
    virtual void funcOne() override
    {
        cout << "This is class - three function" << endl;
    };
};

int main(void)
{
    class_one *objOne = new class_three();
    objOne->funcOne();
}
