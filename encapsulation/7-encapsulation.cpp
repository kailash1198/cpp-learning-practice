#include <iostream>
using namespace std;

class baseClass
{
private:
    int numOne;
    int numTwo;

public:
    baseClass(){};
    baseClass(int a, int b)
    {
        numOne = a;
        numTwo = b;
    }

    int getNumOne()
    {
        return numOne;
    }

    int getNumTwo()
    {
        return numTwo;
    }
};

class derivedClass : public baseClass
{
private:
    int numThree;

public:
    derivedClass(int n)
    {
        numThree = n;
    }

    int getNumThree()
    {
        return numThree;
        ;
    }
};

int main(void)
{
    baseClass baseObj(200, 300);
    derivedClass obj(100);

    cout << baseObj.getNumOne() << endl;
    cout << baseObj.getNumTwo() << endl;
    cout << obj.getNumThree() << endl;
}