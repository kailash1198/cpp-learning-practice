#include <iostream>
using namespace std;
class baseClass
{
public:
    void funcOne()
    {
        cout << "This is function one in base class" << endl;
    }
};

int main()
{
    baseClass *basePtr = new baseClass();
    basePtr->funcOne();
    delete basePtr;
    return 0;
}