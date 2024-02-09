#include <iostream>
#include <string>
using namespace std;

// example-1
class abstractionImplement
{
private:
    int numOne;
    int numTwo;

public:
    void setNum(int a, int b)
    {
        numOne = a;
        numTwo = b;
    };
    void displayNum()
    {
        cout << "Num one " << numOne << endl;
        cout << "Num two " << numTwo << endl;
    };
};

// example-2
class vehicle
{
private:
    void piston()
    {
        cout << "4 piston" << endl;
    }

    void whoMake()
    {
        cout << "Make by Kailash Kumar" << endl;
    }

public:
    void companyName()
    {
        cout << "Bajaj ltd" << endl;
    }

    void model()
    {
        cout << "This 2023 model latest" << endl;
    }

    void fuelType()
    {
        cout << "Petrol fuel type" << endl;
    }
};
int main(void)
{
    // Abstraction basics
    // example-1
    abstractionImplement obj1;
    obj1.setNum(20, 30);
    obj1.displayNum();

    // example-2
    vehicle car1;
    car1.companyName();
    car1.fuelType();
    car1.model();
}