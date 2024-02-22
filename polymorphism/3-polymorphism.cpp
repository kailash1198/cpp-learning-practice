#include <iostream>
using namespace std;
// function overriding run time polymorphism

class baseClass
{
public:
    void func()
    {
        cout << "This is function-1" << endl;
    }
};

class derivedClass : public baseClass
{
public:
    void func()
    {
        cout << "This is function-2" << endl;
    }
};

int main(void)
{
    derivedClass obj;
    baseClass obj2;
    obj.func();
    obj2.func();
}