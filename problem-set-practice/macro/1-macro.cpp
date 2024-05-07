#include <iostream>
// Write a macro to calculate the maximum of two numbers.

#define MAX_FUNC(a, b) (((a) < (b) ? (b) : (a)))
int main()
{
    int numOne = 100;
    int numTwo = 20;
    int maxNum = MAX_FUNC(numOne, numTwo);
    std::cout << maxNum << std::endl;
    return 0;
}