#include <iostream>
using namespace std;

// Design a class called Rectangle that has private member variables for length and width. Implement public member functions to set the length and width of the rectangle, calculate the area, and calculate the perimeter.

class rectangle
{
private:
    int length;
    int width;

public:
    void setValue(int a, int b)
    {
        length = a;
        width = b;
    }

    int calculateArea()
    {
        int area = length * width;
        return area;
    }

    int calculoatePerimeter()
    {
        int perimeter = 2 * (length + width);
        return perimeter;
    }
};

int main(void)
{
    rectangle recOne;
    recOne.setValue(10, 20);
    cout<<"Area = " << recOne.calculateArea() << endl;
    cout<<"Perimeter = " << recOne.calculoatePerimeter() << endl;
}