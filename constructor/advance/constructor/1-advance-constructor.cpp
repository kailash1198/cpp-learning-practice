#include <iostream>
using namespace std;
// constructor overloading
class baseClass
{
private:
    int numOne;
    int numTwo;

public:
    baseClass(int a)
    {
        numOne = a;
    }
    baseClass(int a, int b)
    {
        numOne = a;
        numTwo = b;
    }

    baseClass()
    {
        numOne = 0;
        numTwo = 0;
    }
};

int main(void)
{
    baseClass one(10), two(10, 20), three;
}