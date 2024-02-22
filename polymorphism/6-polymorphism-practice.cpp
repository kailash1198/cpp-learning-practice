#include <iostream>
using namespace std;
// Create a hierarchy of shapes (e.g., Shape, Circle, Rectangle, Triangle, etc.) where each shape has a method area() to calculate its area. Demonstrate polymorphism by having a function that takes a pointer/reference to the base class Shape and calls area() without knowing the specific derived type.

// circle
class circle
{
public:
    int calculatedArea(int r)
    {
        int area = 3.14 * r * r;
        return area;
    }
};

// rectangle
class rectangle
{
public:
    int calculatedArea(int l, int w)
    {
        int area = l * w;
        return area;
    }
};

// triangle
class triangle
{
public:
    int calculatedArea(int base, int height)
    {
        int area = (base * height)/2;
        return area;
    }
};

int main()
{
    circle circleOne;
    rectangle recOne;
    triangle triOne;
    int circleArea = circleOne.calculatedArea(10);
    int recArea = recOne.calculatedArea(10, 20);
    int triArea = triOne.calculatedArea(10, 20);
    cout << circleArea << endl;
    cout << recArea << endl;
    cout << triArea << endl;
}