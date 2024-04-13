#include <iostream>
#include <type_traits>
template <typename myType>

void myFunction()
{
    if (std::is_pointer<myType>::value)
    {
        std::cout << "This is pointer type" << std::endl;
    }
    else
    {
        std::cout << "This is not pointer type" << std::endl;
    }
}
int main()
{
    myFunction<int*>();
    return 0;
}