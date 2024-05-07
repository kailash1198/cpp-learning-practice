#include <iostream>
#include <stdexcept>
// create a function that takes an integer as input and throws an exception if the input is negative. Write a program to call this function and handle the exception appropriately.

void funcOne(int a)
{
    try
    {
        /* code */
        if (a < 0)
        {
            throw std::runtime_error("Your input is negative");
        }
        std::cout<<"Your input is positive"<<std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}
int main()
{

    funcOne(-10);
    return 0;
}