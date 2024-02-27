#include <iostream>
#include <typeinfo>
using namespace std;
class animal
{
public:
    virtual void baseFunc()
    {
        cout << "This is animal class" << endl;
    }
};

class dog : public animal
{
public:
    void dogSound()
    {
        cout << "This is dog sound" << endl;
    }
};

int main(void)
{
    animal *animalPtr = new dog();
    // without RTTI
    //  dog *dogPtr;
    //  dogPtr->baseFunc();

    // this is RTTI
    dog *dogPtr = dynamic_cast<dog *>(animalPtr);
    // dogPtr->baseFunc();
    // dogPtr->dogSound();
    animalPtr->baseFunc(); // base function is virtual function and when we dynamic type cast then base function replace with derived class function.
}