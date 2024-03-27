#include <iostream>
using namespace std;

class myClass
{
    int numOne, numTwo;

public:
    myClass(int a, int b) : numOne(a), numTwo(b)
    {
        cout << numOne << endl;
        cout << numTwo << endl;
    }

    virtual ~myClass()
    {
        cout << "virtual destructor" << endl;
    }
};

int main(void)
{
}