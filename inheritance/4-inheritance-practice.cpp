#include <iostream>
using namespace std;

// class-1
class baseClass
{
private:
    int numOne;
    int numTwo;

protected:
    int numThree;

public:
    baseClass()
    {
        numOne = 10;
        numTwo = 20;
        numThree = 30;
    }

    void display1()
    {
        cout << numOne << numTwo << numThree << endl;
    }
};

// class-2 derived with private visibility

class derivedClass : private baseClass
{
public:
    void display()
    {
        cout << "Derived class" << endl;
    }
};

int main(void)
{

    derivedClass vehicleObj;
    vehicleObj.display();
    // vehicleObj.display1(); //cannot accessed
}