#include <iostream>
using namespace std;
// Compile time polymorphism
// 1. Function overloading - same function multiple times
// 2. Operator overloading

// class baseClass
// {
// private:
//     int numOne;
//     int numTwo;

// public:
//     baseClass()
//     {
//         numOne = 0;
//         numTwo = 0;
//     }

//     void funcOne(){
//         cout<<"This is function one from base class"<<endl;
//     }

//     void funcOne(int a){
//         cout<<"The number you entered is : "<<a<<endl;
//     }
// };

class operatorOverloading
{
private:
    int value;

public:
    operatorOverloading()
    {
        value = 1;
    }

    // operator overloading function
    void operator++()
    {
        ++value;
    }

    void display()
    {
        cout << value << endl;
    }
};

int main()
{
    // baseClass objOne;
    // objOne.funcOne();
    // objOne.funcOne(10);

    operatorOverloading objOne;
    ++objOne;
    ++objOne;
    ++objOne;
    ++objOne;
    ++objOne;
    objOne.display();

    return 0;
}