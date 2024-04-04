#include <iostream>
#include <thread>

class MyFunctor
{
public:
    void operator()(int value)
    {
        std::cout << "Function Object Thread, Value: " << value << std::endl;
    }
};

int main()
{
    int param = 42;
    MyFunctor functor;
    std::thread t1(functor, param);
    t1.join();
    return 0;
}
