#include <iostream>
using namespace std;
// Virtual method - member function of class that is overriden in derived class.
class baseClass
{
public:
    virtual void greeting()
    {
        cout << "Base class function" << endl;
    }
};

class derivedClass : public baseClass
{
public:
    void greeting() override
    {
        cout << "Derived class function" << endl;
    }
};

int main(void)
{
    baseClass *basePtr;
    baseClass baseObj;
    derivedClass derivedObj;

    basePtr = &baseObj;
    basePtr->greeting();

    basePtr = &derivedObj; 
    basePtr->greeting();
}