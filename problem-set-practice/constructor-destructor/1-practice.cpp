#include <iostream>
using namespace std;
// Problem Statement : - Create a class representing a simple geometric shape with a constructor and destructor.

class shape
{
public:
    int length;
    int width;

    // Constructor
    shape(int a, int b)
    {
        length = a;
        width = b;
    }

    // Display shape data
    void displayData()
    {
        cout << length << endl;
        cout << width << endl;
    }

    // Destructor
    ~shape()
    {
        length+1;
    }
};

int main(void)
{
    shape rectangle(10, 5), recTwo(1,2);

    rectangle.~shape();
    recTwo.~shape();
    cout << rectangle.length << endl;

    // cout << sizeof(rectangle) << endl;
    // rectangle.displayData();

    // rectangle.~shape();

    // cout << sizeof(rectangle) << endl;
    // cout << "Size rectwo = " << sizeof(recTwo) << endl;
}