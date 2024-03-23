#include <iostream>
using namespace std;

// class baseClass
// {
// private:
//     int numOne;
//     int numTwo;

// public:
//     baseClass()
//     {
//         numOne = 0;
//         numTwo = 0;
//     }

//     int sum_num(int a, int b)
//     {
//         numOne = a;
//         numTwo = b;
//         int addNum = numOne + numTwo;
//         return addNum;
//     }
// };

class baseClass
{
private:
    int numOne;
    int numTwo;

public:
    void setMethod(int a, int b)
    {
        numOne = a;
        numTwo = b;
    }

    int getMethod_numOne()
    {
        return numOne;
    }
    int getMethod_numTwo()
    {
        return numTwo;
    }
};

int main(void)
{
    baseClass obj;
    obj.setMethod(10, 20);
    int numberOne = obj.getMethod_numOne();
    int numberTwo = obj.getMethod_numTwo();
    cout << numberOne << endl;
    cout << numberTwo << endl;
}