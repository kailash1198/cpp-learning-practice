#include <iostream>
#include <string>
// Function Overloading - Same function repeat multiple time in function definition. but parameter is different each time ans also you see the return type diffrent each function as per you want but function name is same but the working and behavior of function is different.

// function-1
void greet()
{
    std::cout << "Welcome-1" << std::endl;
}

// function-2 but name is same above declaration function-1
void greet(std::string userName)
{
    std::cout << "Welcome-2 = " << userName << std::endl;
}

// function-3 but name is same
std::string greet(std::string welcome, std::string greeting)
{
    std::cout << welcome << std::endl;
    return welcome;
}

int main(void)
{
    // function call
    greet("Kailash");
    greet();
    greet("Kailash", "aryan");
}