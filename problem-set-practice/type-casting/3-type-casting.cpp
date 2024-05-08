#include <iostream>
// Convert a character to an integer and print the ASCII value.

int main()
{
    char myChar = 'a';
    std::cout << myChar << std::endl;
    std::cout << sizeof(myChar) << std::endl;
    std::cout << "----------------------" << std::endl;

    int ascValue = (int)myChar;
    std::cout << ascValue << std::endl;
    std::cout << sizeof(ascValue) << std::endl;
    std::cout << "----------------------" << std::endl;

    int intType = static_cast<int>(myChar);
    std::cout << intType << std::endl;
    std::cout << sizeof(intType) << std::endl;
    std::cout << "----------------------" << std::endl;

    return 0;
}