#include <iostream>

int main(void)
{
    // Capture clause by Values
    int numOne = 10;
    auto funcOne = [numOne]()
    {
        std::cout << "Numone value = " << numOne << std::endl;
    };
    funcOne(); // lambda functiin call

    // Capture clause by Refrence
    int numTwo = 100;

    auto lambdaFunction = [&numTwo]()
    {
        std::cout << "Capture by refrence of numTwo = " << numTwo << std::endl;
    };
    lambdaFunction();

    // Capture by combination of both - all capture by value or by refrence
    int a = 10;
    int b = 20;

    auto myFunction = [=]()
    {
        // you cannot modify if you access by value

        a + 1;
        b + 1;
        std::cout << "a = " << a << std::endl;
        std::cout << "b = " << b << std::endl;
    };
    myFunction();

    int c = 1;
    int d = 2;

    auto newFunction = [&]()
    {
        // By refrence you can modify the value of variable
        c++;
        d++;
        std::cout << "c = " << c << std::endl;
        std::cout << "d = " << d << std::endl;
    };
    newFunction();
}