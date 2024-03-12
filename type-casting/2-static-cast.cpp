#include <iostream>

int main(void)
{
    double numOne = 10.577845374;
    float newNumType = static_cast<float>(numOne);

    std::cout.precision(11);
    std::cout << numOne << std::endl;
    std::cout << newNumType << std::endl;
}