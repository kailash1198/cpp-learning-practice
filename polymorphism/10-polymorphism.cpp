#include <iostream>
using namespace std;
// compile time polymorphism

class baseClass
{
private:
    int numOne;
    int numTwo;

public:
    baseClass(int a = 0, int b = 0)
    {
        numOne = a;
        numTwo = b;
    }

    void func()
    {
        cout << "This is func" << endl;
    }

    void func(int num)
    {
        cout << "Value num = " << num << endl;
    }
};

int main(void)
{
    baseClass obj;
    obj.func();
    obj.func(100);
}