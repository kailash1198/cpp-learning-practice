#include <iostream>
namespace listOne
{
    class classOne
    {
    public:
        void funcOne()
        {
            std::cout << "Class One - ListOne - funcone" << std::endl;
        }
    };

    class classTwo
    {
    public:
        void funcTwo()
        {
            std::cout << "Class One - ListOne - funcTwo" << std::endl;
        }
    };

    class classThree
    {
    public:
        void funcThree()
        {
            std::cout << "Class One - ListOne - funcThree" << std::endl;
        }
    };

    void greeting(){
        std::cout<<"Welcome back"<<std::endl;
    }
};

int main()
{
    listOne::classOne obj1;
    listOne::classTwo obj2;
    listOne::classThree obj3;
    listOne::greeting();

    obj1.funcOne();
    obj2.funcTwo();
    obj3.funcThree();
    return 0;
}