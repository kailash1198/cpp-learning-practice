#include <iostream>
class baseClass
{
public:
    void funcOne()
    {
        std::cout << "This is function one from Base Class" << std::endl;
    }
};

class childClass : public baseClass
{

public:
    void funcTwo()
    {
        std::cout << "This is function two from child class" << std::endl;
    }
};

int main(void)
{
    baseClass *baseObject;
    childClass *childObject;

    childObject = new childClass;

    baseObject = static_cast<baseClass*>(childObject);

    
}