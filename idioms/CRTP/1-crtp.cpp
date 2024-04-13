#include <iostream>

// CRTP - Curiosly Recurring Template Pattern
// The Curiously Recurring Template Pattern (CRTP) is an idiom in C++ that allows a class to derive from a class template instantiation using itself as a template argument. It is also known as F-bound polymorphism and is a form of F-bounded quantification. The name CRTP was coined by Jim Coplien in 1995. CRTP is sometimes called "Upside-Down Inheritance" because it allows class hierarchies to be extended by substituting different base classes.
template <typename derived>
// base class
class baseClass
{
public:
    void funcOne()
    {
        static_cast<derived *>(this)->implementation();
    }

    void implementation()
    {
        std::cout << "Default implementation is base" << std::endl;
    }
};

// derived class-1
class derivedClass : public baseClass<derivedClass>
{
public:
    void implementation()
    {
        std::cout << "Custom implementation in Derived1" << std::endl;
    }
};

// derived class-2
class derivedClassTwo : public baseClass<derivedClassTwo>
{
};

int main()
{
    derivedClass obj1;
    obj1.funcOne();

    derivedClassTwo obj2;
    obj2.funcOne();
    return 0;
}