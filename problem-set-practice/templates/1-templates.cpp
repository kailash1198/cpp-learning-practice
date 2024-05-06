#include <iostream>

// Template Functions: Write a template function to find the maximum of two numbers of any data type.
template <typename userType>

void findMaxNum(userType a, userType b)
{
    if (a < b)
    {
        std::cout << "Max = " << b << std::endl;
        std::cout << "Min = " << a << std::endl;
    }
    else
    {
        std::cout << "Max = " << a << std::endl;
        std::cout << "Min = " << b << std::endl;
    }
}

int main()
{

    findMaxNum(10.12, -10.7);
    return 0;
}