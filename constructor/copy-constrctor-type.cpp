#include <iostream>
#include <string>
using namespace std;
// A copy constructor is a member function that initializes an object using another object of the same class. In simple terms, a constructor which creates an object by initializing it with an object of the same class, which has been created previously is known as a copy constructor.
class baseClass
{
private:
    int numOne;
    int numTwo;

public:
    baseClass(int a, int b)
    {
        numOne = a;
        numTwo = b;
    };

    baseClass(baseClass &newObj)
    {
        newObj.numOne = 100;
        newObj.numTwo = 20;
    };

    void display()
    {
        cout << numOne << endl;
        cout << numTwo << endl;
    }
};

int main(void)
{
    baseClass(100, 200).display();
}