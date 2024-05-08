#include <iostream>
// Write a program to convert an integer to a float.
int main()
{
    int numOne = 10;
    std::cout << sizeof(numOne) << std::endl;

    float floatType = (float)numOne;
    float floatTypeAnotherMethod = static_cast<float>(numOne);
    std::cout << sizeof(floatType) << std::endl;
    std::cout << sizeof(floatTypeAnotherMethod) << std::endl;

    return 0;
}