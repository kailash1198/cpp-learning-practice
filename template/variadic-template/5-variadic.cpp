#include <iostream>
template <typename userType, typename... arguments>

void myFunction(userType numOne, arguments... argumentsList)
{
    std::cout<<numOne<<std::endl;
    ((std::cout<<argumentsList<<std::endl),...);
}
int main()
{
    myFunction(1,2,3,4,5);
    return 0;
}