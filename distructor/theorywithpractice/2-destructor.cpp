#include <iostream>
using namespace std;
class baseClass
{
public:
    baseClass()
    {
        cout << "Base class constructor called automatically" << endl;
    }

    ~baseClass()
    {
        cout << "Memory released" << endl;
    };
};

int main(void)
{
    {
        baseClass obj;
    }
    baseClass obj2;
}