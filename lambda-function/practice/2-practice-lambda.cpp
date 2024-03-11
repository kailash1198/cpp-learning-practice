#include <iostream>
// Lambda function practice

auto myFunc = []() -> void
{
    std::cout << "This is lambda function" << std::endl;
};

auto funcTwo = []() -> void
{
    std::cout << "This is function two" << std::endl;
};

int main(void)
{
    myFunc();

    funcTwo();

    // Lambda expression
    int numberOne = 1;
    [numberOne]() -> void
    {
        std::cout << "Number One = " << numberOne << std::endl;
    };
}