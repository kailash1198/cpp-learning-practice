#include <iostream>
using namespace std;
// function overloading compile time polymorphism
class baseClass
{
public:
    void func(int a)
    {
        cout << "Func-1 with same type : " << a << endl;
    }

    void func(double b)
    {
        cout << "Func-2 with same type : " << b << endl;
    }

    void func(string c)
    {
        cout << "Func-3 with same type : " << c << endl;
    }
};

int main(void)
{
    baseClass obj;
    obj.func(10);
    obj.func(20.1098);
    obj.func("kailash");
}