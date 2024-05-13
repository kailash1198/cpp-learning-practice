#include <iostream>
// base case
void myFunction() {};

// variadic template function
template <typename userType, typename... argument>
void myFunction(userType numOne, argument... numberList)
{
    std::cout << numOne << std::endl;
    myFunction(numberList...);
}
int main()
{
    myFunction(1, "kailash", 1, 2, 3, 4, "Kumar");
    return 0;
}