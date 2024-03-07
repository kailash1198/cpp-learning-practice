#include <iostream>
namespace groupOne
{
    void funcOne()
    {
        std::cout << "This is namespace-one.h from other folder = FuncOne" << std::endl;
    }

    void funcTwo()
    {
        std::cout << "This is namespace-one.h from other folder = Functwo" << std::endl;
    }
}

namespace groupTwo
{
    void funcThree()
    {
        std::cout << "This is namespace-one.h from other folder = FuncThree" << std::endl;
    }

    void funcFour()
    {
        std::cout << "This is namespace-one.h from other folder = FuncFour" << std::endl;
    }
}