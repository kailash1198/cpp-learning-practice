#include <iostream>
class classOne
{
private:
    int one;
    int two;

public:
    classOne() = default;
    classOne(classOne &obj)
    {
        obj.one = 10;
        obj.two = 20;
    }
};

int main()
{
    classOne objOne;
    classOne objTwo;
    objOne = objTwo;

    return 0;
}