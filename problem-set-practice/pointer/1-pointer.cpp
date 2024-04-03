#include <iostream>
using namespace std;
// Write a program to swap two integers using pointers.
void swapNumber(int *a, int *b)
{
    int *temp = a;
    a = b;
    b = temp;
    cout << "a = " << *a << endl;
    cout << "b = " << *b << endl;
}
int main()
{
    int numOne = 10;
    int numTwo = 20;

    int *a = &numOne;
    int *b = &numTwo;
    swapNumber(a, b);
    return 0;
}