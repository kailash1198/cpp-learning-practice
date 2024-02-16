#include <iostream>
using namespace std;

class baseClass
{
private:
    int sum;
    int numOne;
    int numTwo;

public:
    // baseClass(int a)
    // {
    //     numOne = a;
    // }

    baseClass(int b, int c)
    {
        numOne = b;
        numTwo = c;
        cin>>numOne>>numTwo;
        sum = b + c;
        cout << sum << endl;
    }

    // baseClass()
    // {
    //     cout << "Constructor call" << endl;
    // }
};

class derivedClass : public baseClass
{
public:
    void derivedTest()
    {
        cout << "This is derived output" << endl;
    }
};

int main(void)
{
    // baseClass obj1(10, 20);

    derivedClass obj2;
}