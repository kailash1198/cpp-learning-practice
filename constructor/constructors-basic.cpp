#include <iostream>
#include <string>
using namespace std;
// constructor definition inside class
//  class baseClass
//  {
//  public:
//      int numOne;
//      int numTwo;

//     baseClass()
//     {
//         numOne = 10;
//         numTwo = 10;
//     }

//     void greeting()
//     {
//         cout << "Namaste, Dost" << endl;
//     }

//     void displayConstructor()
//     {
//         cout << numOne << endl;
//         cout << numTwo << endl;
//     }
// };

// constructor definition outside class
class classTwo
{
public:
    int numOne;
    int numTwo;
    classTwo();
    void display()
    {
        cout << numOne << endl;
        cout << numTwo << endl;
    };
};

classTwo::classTwo()
{
    numOne = 100;
    numTwo = 200;
}

// void classTwo::display()
// {
//     cout << numOne << endl;
//     cout << numTwo << endl;
// };

int main(void)
{

    // baseClass obj1;
    // obj1.numOne;
    // cout << "Default value of numOne = " << obj1.numOne << endl;
    // obj1.displayConstructor();

    classTwo obj1;
    obj1.display();
}