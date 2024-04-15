#include <iostream>
#include <type_traits>

// Write a template function that takes a type as a template parameter and uses type traits to determine if the given type is an integer type.

template <typename T>

bool is_int()
{
    return std::is_integral<T>::value;
}

int main()
{
    std::cout << is_int<int>() << std::endl;
    std::cout << is_int<float>() << std::endl;
    return 0;
}