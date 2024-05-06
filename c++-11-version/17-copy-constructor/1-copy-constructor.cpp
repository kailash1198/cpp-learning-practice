#include <iostream>
class myClass
{
private:
    int a;

public:
    myClass() = default;

    myClass(int value)
    {
        a = value;
    }

    myClass(myClass &newObj)
    {
        newObj.a = 10;
    }
};

int main()
{
    myClass classOne(100);
    myClass classTwo = classOne;
    return 0;
}