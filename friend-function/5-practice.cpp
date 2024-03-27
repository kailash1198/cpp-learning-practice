#include <iostream>
using namespace std;
#include <complex>
// Create a class representing a complex number and implement a friend function to add two complex numbers.

class complexNumber
{
private:
    complex<double> numOne;
    complex<double> numTwo;

public:
    complexNumber(double a, double b)
    {
        numOne = a;
        numTwo = b;
    }
    friend complex<double> addNum(complexNumber obj);
};

complex<double> addNum(complexNumber obj)
{
    complex<double> sum = obj.numOne + obj.numTwo;
    return sum;
};

int main(void)
{
    complexNumber number(10.34, 20.34);

    complex<double> sumNum = addNum(number);
    cout << sumNum << endl;
}