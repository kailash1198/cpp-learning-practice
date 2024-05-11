#include <iostream>

int main()
{
    int numOne = 10;
    int numTwo = 20;

    if (numOne ^ numTwo)
    {
        std::cout << "True" << std::endl;
    }       
        else
    {
        std::cout << "False" << std::endl;
    }

    return 0;
}