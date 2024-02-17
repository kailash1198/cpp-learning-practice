#include <iostream>
using namespace std;
//constructor overloading in inheritance
class baseClass
{
public:
    int total;
    baseClass()
    {
        total = 0;
    }

    baseClass(int a, int b)
    {
        total = a + b;
    }

    void displayBase()
    {
        cout << "The sum = " << total << endl;
    }
};

class derivedClass : public baseClass
{
public:
    derivedClass()
    {
        cout << "Derived class constructor-1" << endl;
    }

    derivedClass(int num)
    {
        cout << "Derived class constructor-2" << endl;
        cout << num << endl;
    }
};
int main(void)
{
    // derivedClass obj;
    // derivedClass obj(0); //error - Because you cannot access constructor overloading in another class objects
    // derivedClass obj2(10, 20); //error

    // baseClass obj(10, 20);
    // obj.displayBase();

    derivedClass obj(10);
}