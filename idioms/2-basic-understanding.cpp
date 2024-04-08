#include <iostream>
using namespace std;
class baseClass
{
public:
    baseClass(){};
    ~baseClass(){};
};

class myClass
{
public:
    myClass(){};
    myClass(const myClass &obj){};
    myClass &operator=(const myClass &obj){};
    ~myClass(){};
};

int main()
{
    {
        baseClass objOne;
    }
    return 0;
}