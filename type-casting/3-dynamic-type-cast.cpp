#include <iostream>
using namespace std;
class baseClass
{
public:
    void baseFunc()
    {
        cout << "This is base class function" << endl;
    }

    virtual ~baseClass() {}
};

class derivedClass : public baseClass
{
public:
    void derivedFunc()
    {
        cout << "This is derived function" << endl;
    }
};

int main(void)
{
    baseClass *basePtr;
    derivedClass *derivedPtr;

    // Base class to Derived class
    basePtr = new derivedClass();
    derivedPtr = dynamic_cast<derivedClass *>(basePtr);
}