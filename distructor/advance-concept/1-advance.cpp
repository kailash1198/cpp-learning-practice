#include <iostream>
class myClass
{
public:
    ~myClass()
    {
        std::cout << "Destructor called automatically" << std::endl;
    }
};

int main()
{
    myClass obj;
    return 0;
}