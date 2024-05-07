#include <iostream>
// Create a macro to swap two variables without using a temporary variable.
#define SWAP_NUM(a, b) \
    do                 \
    {                  \
        (a) ^= (b);    \
        (b) ^= (a);    \
        (a) ^= (b);    \
    } while (0)
    
int main()
{
    int numOne = 1;
    int numTwo = 2;

    SWAP_NUM(numOne, numTwo);

    std::cout << numOne;
    std::cout << numTwo;
    return 0;
}