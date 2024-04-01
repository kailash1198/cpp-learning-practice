#include <iostream>
using namespace std;

// Create a hierarchy of shapes (e.g., Shape, Circle, Rectangle, Triangle, etc.) where each shape has a method area() to calculate its area. Demonstrate polymorphism by having a function that takes a pointer/reference to the base class Shape and calls area() without knowing the specific derived type.

// shape
class shape
{
public:
    virtual void area()
    {
        cout << "Area of Shape : " << endl;
    }
};

// circle
class circle : public shape
{
private:
    int r;

public:
    circle(int a)
    {
        r = a;
    }

    virtual void area() override
    {
        double area_result = 3.14 * r * r;
        cout << area_result << endl;
    }
};

// rectangle
class rectangle : public shape
{
private:
    int l;
    int w;

public:
    rectangle(int a, int b)
    {
        l = a;
        w = b;
    }

    virtual void area() override
    {
        int area_rectangle = l * w;
        cout << area_rectangle << endl;
    }
};

// triangle
class triangle : public shape
{
private:
    int base;
    int height;

public:
    triangle(int a, int b)
    {
        base = a;
        height = b;
    }

    virtual void area() override
    {
        double area_triangle = 1 / 2 * (base * height);
        cout << area_triangle << endl;
    }
};

int main(void)
{
    shape *shapePtr;
    circle circleOne(10);
    rectangle recOne(10, 20);
    triangle triangleOne(4, 5);

    shapePtr = &circleOne;
    shapePtr->area();

    shapePtr = &recOne;
    shapePtr->area();

    shapePtr = &triangleOne;
    shapePtr->area();
}