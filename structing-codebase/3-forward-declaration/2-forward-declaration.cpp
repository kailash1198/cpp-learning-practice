#include <iostream>
// In ▶️class forward declaration you have to use pointer or reference of class for definition of existence class in our program
class baseClass;

class baseClassDefine
{
    baseClass *ptr; // pointer to base class
};

int main(void)
{
    baseClassDefine objOne;
}

// You get error because you redclare class its not possible. You have to use pointer and refrence.
/*
class baseClass
{
private:
    int numOne;
    int numTwo;

public:
    baseClass(int a = 10, int b = 20)
    {
        numOne = a;
        numTwo = b;
    }

    void display()
    {
        std::cout << "Numone = " << numOne << std::endl;
        std::cout << "NumTwo = " << numTwo << std::endl;
    }
};
*/