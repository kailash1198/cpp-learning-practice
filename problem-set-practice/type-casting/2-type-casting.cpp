#include <iostream>
// Convert a float to an integer and print the result.
int main()
{
    float numOne = 10.123;
    std::cout << numOne << std::endl;
    std::cout << sizeof(numOne) << std::endl;
    std::cout << "-----------------------" << std::endl;

    // c-type style type casting float to int
    int intType = (int)numOne;
    std::cout << numOne << std::endl;
    std::cout << sizeof(intType) << std::endl;
    std::cout << "-----------------------" << std::endl;

    // C++ style type casting using static cast
    int intTypeAnotherMethod = static_cast<int>(numOne);
    std::cout << intTypeAnotherMethod << std::endl;
    std::cout << sizeof(intTypeAnotherMethod) << std::endl;
    std::cout << "-----------------------" << std::endl;

    return 0;
}