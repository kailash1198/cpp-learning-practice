#include <iostream>
// destructor understanding
struct myName
{
    myName()
    {
        std::cout << "This is my name structure constructor function" << std::endl;
    }
    ~myName()
    {
        std::cout << "Object memory realesed" << std::endl;
    }
    void func() 
    {
        std::cout << "This is my name structure constructor function-2" << std::endl;
    }
} nameOne;

int main(void)
{
    nameOne.func();
    nameOne.~myName();
    nameOne.func();
}