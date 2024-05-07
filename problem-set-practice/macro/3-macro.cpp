#include <iostream>
// Write a macro to calculate the square of a number.
#define SQUARE(a)((a)*(a))
int main()
{
    int resultSquare = SQUARE(20);
    std::cout<<resultSquare<<std::endl;
    return 0;
}