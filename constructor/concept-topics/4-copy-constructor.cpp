#include <iostream>
using namespace std;
// copy constructor - Member function that iniliaze a Object using another Object of the same class.
// A copy constructor is overload constructor
//in copy constructor you cannot call constructor without pass another object (see line no - 53 and 54)
// 1. Default copy constructor - this constructor automatically defined by compiler
// 2. User defined copy constructor - The programmer defined user defined contructor

// user defined copy constructor
class baseClass
{
private:
    int numOne;
    int numTwo;

public:
    baseClass(int a, int b)
    {
        numOne = a;
        numTwo = b;
    };
    baseClass(baseClass &obj)
    {
        numOne = obj.numOne;
        numTwo = obj.numTwo;
        cout << "This is from base class" << endl;
        cout << numOne << endl;
        cout << numTwo << endl;
    }
};

// without copy constructor
class mainClass
{
private:
    int dataOne;
    int dataTwo;

public:
    mainClass(int a = 0, int b = 0)
    {
        dataOne = a;
        dataTwo = b;
        cout << "This is from main class" << endl;
        cout << dataOne << endl;
        cout << dataTwo << endl;
    };
};

int main(void)
{
    // with copy constructor
    baseClass objTwo(10, 20); // if we call only this that means error
    // baseClass objThree(objTwo); // this object copy of above objTwo object - Thats why we use copy constructor

    // withour copy cnstructor
    // mainClass mainObj1(100, 200); // this is call and print output
    // mainClass mainObj2(mainObj1);
}