#include <iostream>
#include <string>
using namespace std;

// Pure virtual function = no body in base class but body defined in derived class.
class baseClass
{
public:
    virtual void greeting() = 0; // assign 0 because you tell function to body not defined there but defined in derived class
};

class derivedClass : public baseClass
{
public:
    void greeting()
    {
        cout << "Hello world" << endl;
    }
};

int main(void)
{
    //baseClass baseObj1; //Error = you cannot defined object of base class because its pure virtual function
    derivedClass derivedObj1;

    baseClass *baseClassPointer;
    baseClassPointer = &derivedObj1;

    baseClassPointer->greeting();
}