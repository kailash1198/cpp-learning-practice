#include <iostream>
using namespace std;
// run time polumorphism
class baseClass
{
public:
    virtual int funcOne(int numOne, int numTwo)
    {
        int totalNum = numOne + numTwo;
        return totalNum;
    }
};

class derivedClass : public baseClass
{
public:
    int funcOne(int numOne, int numTwo)
    {
        int totalNum = numOne + numTwo;
        return totalNum;
    }
};

class derivedTwo : public baseClass
{
public:
    int funcOne(int numOne, int numTwo)
    {
        int subtractNum = numTwo - numOne;
        return subtractNum;
    }
};

int main(void)
{
    derivedClass derivedObject;
    derivedTwo derivedTwoObj;
    // when we need single address then we need only and operator for derefrence of the object
    //  baseClass &ptr = derivedObject;
    //  int totalNum = ptr.funcOne(10, 20);
    //  cout << totalNum << endl;

    baseClass *ptr[2];
    ptr[0] = &derivedObject;
    ptr[1] = &derivedTwoObj;

    int totalAdd = ptr[0]->funcOne(10, 20);
    int subtractNum = ptr[1]->funcOne(400, 50);

    cout << totalAdd << endl;
    cout << subtractNum << endl;
}