#include <iostream>
// Forward declaration - This is the way of define before definition and code of class, function or variables.

void funcOne(); // forward declaration
int main(void)
{
    int numOne;  // Forward declaration
    numOne = 10; // Definition

    funcOne();
}
// forward definition of above define function
void funcOne()
{
    std::cout << "This is funcOne" << std::endl;
}