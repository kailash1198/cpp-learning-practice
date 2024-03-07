#ifndef HEADER_ONE // start checking condition
#define HEADER_ONE
#include <iostream>
// Block of code to be execute as per include guard condition :
class headerFileOneClass
{
private:
    int numOne;
    int numTwo;

public:
    headerFileOneClass(int a = 0, int b = 0)
    {
        numOne = a;
        numTwo = b;
    }

    void display()
    {
        std::cout << "Numone from headerfile-one = " << numOne << std::endl;
        std::cout << "NumTwo from headerfile-one = " << numTwo << std::endl;
    }
};

#endif // End of checking condition