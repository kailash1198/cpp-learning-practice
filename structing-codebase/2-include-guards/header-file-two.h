#ifndef HEADER_Two // start checking condition with macro
#define HEADER_Two // If macro not exist  then define macro
#include <iostream>
class headerFileTwoClass
{
private:
    int numOne;
    int numTwo;

public:
    headerFileTwoClass(int a = 10, int b = 20)
    {
        numOne = a;
        numTwo = b;
    }

    void display()
    {
        std::cout << "Header file two - numone = " << numOne << std::endl;
        std::cout << "Header file two - numtwo = " << numTwo << std::endl;
    }
};

#endif // End of the condition checking