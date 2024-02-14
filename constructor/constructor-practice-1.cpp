#include <iostream>
using namespace std;

class baseClass
{
private:
    int numOne;
    int numTwo;

public:
    baseClass()
    {
        numOne = 10;
        numTwo = 20;
    };

    void display()
    {
        cout << numOne + numTwo << endl;
    };

    ~baseClass();
};

int main(void)
{
    // baseClass obj1(10, 20);
    baseClass obj1;
    obj1.display();
    // obj1.display();
}