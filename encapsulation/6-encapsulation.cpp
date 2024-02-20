#include <iostream>
using namespace std;

class baseClass
{
private:
    int numOne;
    int numTwo;

public:
    baseClass()
    {
        numOne = 0;
        numTwo = 0;
    }

    void setValue(int a, int b)
    {
        numOne = a;
        numTwo = b;
    }

    int getValueOne()
    {
        return numOne;
    }

    int getValueTwo()
    {
        return numTwo;
    }
};

int main(void)
{

    baseClass obj;
    obj.setValue(130, 23530);

    cout<<obj.getValueOne()<<endl;
    cout<<obj.getValueTwo()<<endl;
}