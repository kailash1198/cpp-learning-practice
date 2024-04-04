#include <iostream>
#include <thread>

using namespace std;
void funcOne()
{
    std::cout << "This is func One" << std::endl;
}

void funcTwo()
{
    std::cout << "This is func two" << std::endl;
}

int main()
{
    thread t1(funcOne);
    thread t2(funcTwo);

    t1.join();
    t2.join();
    return 0;
}