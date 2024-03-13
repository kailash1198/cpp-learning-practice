#include <iostream>
using namespace std;
class baseClass
{
public:
    int numOne;
    int numTwo;
    baseClass(int a, int b)
    {
        numOne = a;
        numTwo = b;
    }
};

namespace funcGroup
{
    void addingNum(baseClass &baseClassObjOne, baseClass &baseClassObjTwo)
    {
        int one = baseClassObjOne.numOne + baseClassObjOne.numTwo;
        int two = baseClassObjTwo.numOne + baseClassObjTwo.numTwo;


        int total = one + two;
        cout << "Total = " << total << endl;
    };
}

using funcGroup::addingNum;

int main(void)
{
    baseClass obj1(10, 20), obj2(30, 40);
    addingNum(obj1, obj2);
}