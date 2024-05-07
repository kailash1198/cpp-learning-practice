#include <iostream>
#include <stdexcept>

int main()
{
    int number_one = 10;
    int number_two = 2; // but if u give another then error not came.

    int result;

    try
    {
        if (number_two == 2)
        {
            throw std::runtime_error("You cannot devide by 2");
        }
        result = number_one / number_two;
        std::cout << "Result = " << result << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout<<"Last"<<std::endl;

    return 0;
}