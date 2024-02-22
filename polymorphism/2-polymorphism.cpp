#include <iostream>
using namespace std;
// operator overloading compile time polymorphism
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

    baseClass operator+(baseClass &obj)
    {
        baseClass objTwo;
        objTwo.numOne = numOne + obj.numOne;
        objTwo.numTwo = numTwo + obj.numTwo;
        return objTwo;
    }
    void print() { cout << numOne << " + i" << numTwo << endl; }
};

int main(void)
{
    baseClass a(10, 5), b(2, 4);
    baseClass c = a + b;
    c.print();
}