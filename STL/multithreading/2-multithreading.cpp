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
    std::thread thread_obj(functor, param);
    thread_obj.join();
    return 0;
}
