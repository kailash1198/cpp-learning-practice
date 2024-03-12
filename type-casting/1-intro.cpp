#include <iostream>
// Type casting - Change one type to another types is called type casting.
// Implicit - Automatic by compile  r
// Explicit - Cast by programmer

// 4 method for casting in C++ :
// 1. Static-cast - for up casting(Up casting means derived to base)
// 2. Dynamic-cast - for down casting (Down casting means base to deived)
// 3. const cast -
// 4. Reinterpret-cast -
int main(void)
{
    double numOne = 10.76795;
    // double newType = static_cast<double>(numOne);
    // std::cout << newType << std::endl;
    std::cout.precision(10); // set precision manually
    float dynamicNum = (float)numOne;
    std::cout << dynamicNum << std::endl;
    std::cout << numOne << std::endl;
}