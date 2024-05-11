#include <atomic>
#include <iostream>
#include <thread>
// atomic operation
int main()
{
    std::atomic<int> numOne;
    numOne.store(10);

    std::cout<<numOne<<std::endl;
}