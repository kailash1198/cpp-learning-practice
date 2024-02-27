#include <iostream>
using namespace std;
// swaping number using function with pointer implement
int numberSwaping(int numOne, int numTwo)
{
    int *temp = &numOne;
    numTwo = *temp;
    numOne = numTwo;
    return numOne;
}

int main(void)
{
    cout << numberSwaping(10, 20) << endl;
}