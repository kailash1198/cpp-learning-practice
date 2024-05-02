#include <iostream>

template <typename userType>

auto funcOne(userType userInput)
{
    return userInput;
}

int main()
{
    auto funcResult = funcOne("Kailash");
    std::cout << funcResult << std::endl;
    return 0;
}