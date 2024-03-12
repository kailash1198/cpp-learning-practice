#include <iostream>
// Static casting

class baseClass
{
public:
    void baseFunc()
    {
        std::cout << "base class base function" << std::endl;
    }
};

class derivedClass : public baseClass
{
public:
    void derivedFunc()
    {
        std::cout << "Derived class derived function" << std::endl;
    }
};

int main(void)
{
    baseClass *basePtr;       // assume float
    derivedClass *derivedPtr; // assume int

    // derived class(int) to base class(float) -  up casting - static cast
    // static_cast<derivedClass*>(basePtr);

    // float                float        int
    basePtr = static_cast<baseClass *>(derivedPtr);
    derivedPtr->baseFunc();
    derivedPtr->derivedFunc();
}