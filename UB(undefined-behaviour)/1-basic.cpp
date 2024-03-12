#include <iostream>
using namespace std;

int main(void)
{
    int numOne;
    int numTwo = numOne + 10; // undefined behaviour when compile this code
    cout << numTwo << endl;
}