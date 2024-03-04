#include <iostream>
using namespace std;
// Destructor - for delete object from class.
// The main purpose of destructor is release/delete allocated memory of Object when object goes out of scope.
// Destructor does not take any argument and not return anything
// Destructors are used to clean up resources used by an object.For example, releasing memory, closing files, etc.

// Destructor called automatically when Object is destroyed

// If an object is not going out of scope, then its destructor won't be called automatically. Instead, you have to explicitly delete the object if it was dynamically allocated using the new keyword.

class baseClass
{
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
        cout << numOne << endl;
        cout << numTwo << endl;
    }

    ~baseClass()
    {
        cout << "Object deleted" << endl;
    }
};

int main(void)
{
    {
        baseClass newObj;
    }
    cout << "Memory Released" << endl;

    {
        baseClass *obj = new baseClass();
    }
    cout << "Memory not released" << endl;
}