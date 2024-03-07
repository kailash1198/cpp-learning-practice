#include <iostream>

namespace groupOneFromNamespaceTwo
{
    void funcOne()
    {
        std::cout << "Group one from namespace two = funcOne" << std::endl;
    }

    void funcTwo()
    {
        std::cout << "Group one from namespace two = FuncTwo" << std::endl;
    }
}
namespace groupTwoFromNamespaceTwo
{
    void funcThree()
    {
        std::cout << "Group Two from namespace two = FuncThree" << std::endl;
    }

    void funcFour()
    {
        std::cout << "Group Two from namespace two = FuncFour" << std::endl;
    }
}