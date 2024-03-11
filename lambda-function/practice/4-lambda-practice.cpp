#include <iostream>

int main(void)
{
    int numOne; int numTwo;
    std::cout << "ENter value : ";
    std::cin >> numOne;
    std::cin>>numTwo;

    auto calculateValue = [&]()
    {
        int total = numOne + numTwo;
        std::cout << total << std::endl;
    };

    calculateValue();
}