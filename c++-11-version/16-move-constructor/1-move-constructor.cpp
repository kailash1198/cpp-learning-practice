#include <iostream>

class baseClass
{
private:
    int a;

public:
    // default constructor
    baseClass()
    {
        std::cout << "Default constructor called" << std::endl;
    }

    // move constructor
    baseClass(baseClass &&obj)
    {
        std::cout << "Move constructor" << std::endl;
    }
};

int main()
{
    baseClass baseObjOne;
    baseClass baseObjTwo(std::move(baseObjOne)); //move constructor
    return 0;
}