#include <iostream>
#include <thread>

void funcOne()
{
    std::cout << "This is func one" << std::endl;
}

void funcTwo()
{
    std::cout << "This is func Two" << std::endl;
}

int main()
{

    std::thread one(funcOne);
    std::thread two(funcTwo);

    // one.join();
    // two.join();
    return 0;
}