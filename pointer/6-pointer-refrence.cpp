#include <iostream>
// pointer reference - Point to same object always

void numSwaping(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main(void)
{
    int numOne = 10;
    int &ref = numOne; // ref which point to numone variable
    std::cout << ref << "\n";
    std::cout << &ref << "\n";

    int numTwo = 700;
    int &numThree = numTwo;
    int &numFour = numThree;

    std::cout << numFour << "\n";

    int one = 100;
    int two = 200;
    numSwaping(one, two);
    std::cout<<one<<"\n";
    std::cout<<two<<"\n";
}