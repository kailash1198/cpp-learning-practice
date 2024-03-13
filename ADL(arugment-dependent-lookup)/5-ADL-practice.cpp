#include <iostream>

namespace my_namespace
{
    class MyType
    {
    };

    void my_function(MyType &obj)
    {
        std::cout << "Inside my_function\n";
    }
}

int main()
{
    my_namespace::MyType obj;
    my_function(obj); // ADL will find my_function
    return 0;
}
