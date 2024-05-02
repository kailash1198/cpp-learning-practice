#include <iostream>
using namespace std;

// Implement a hierarchy of shapes like Circle, Rectangle, and Triangle. Include methods to calculate area and perimeter for each shape.

class shape
{
protected:
    int areaValue;
    int peremeterValue;

public:
    virtual void canculateArea()
    {
    }

    virtual void calculatePeremeter()
    {
    }
};

// circle
class circle : public shape
{
private:
    int radious;

public:
    circle(int a)
    {
        radious = a;
    }

    void canculateArea()
    {
        areaValue = 3 * radious * radious;
        cout << "Area of Circle : " << areaValue << endl;
    }

    void calculatePeremeter()
    {
        peremeterValue = 2 * 3 * radious;
        cout << "Peremeter of Circle : " << peremeterValue << endl;
    }
};

// rectangle
class rectangle : public shape
{
private:
    int length;
    int width;

public:
    rectangle(int a, int b)
    {
        length = a;
        width = b;
    }

    void canculateArea()
    {
        areaValue = length * width;
        cout << "Area of Rectangle : " << areaValue << endl;
    }

    void calculatePeremeter()
    {
        peremeterValue = 2 * (length + width);
        cout << "Peremeter of Rectangle : " << peremeterValue << endl;
    }
};

// triangle
class triangle : public shape
{
private:
    int base;
    int height;
    int len;

public:
    triangle(int a, int b, int c)
    {
        base = a;
        height = b;
        len = c;
    }

    void canculateArea()
    {
        areaValue = (1 / 2) * base * height;
        cout << "Area of Triangle : " << areaValue << endl;
    }

    void calculatePeremeter()
    {
        peremeterValue = base + height + len;
        cout << "Peremeter of Triangle : " << peremeterValue << endl;
    }
};

int main()
{
    shape *shapePtr;
    circle circle_one(10);
    rectangle rec_one(5, 10);
    triangle trian_one(5, 10, 15);

    // circle
    shapePtr = &circle_one;
    shapePtr->canculateArea();
    shapePtr->calculatePeremeter();
    cout << "----------------------" << endl;

    // Rectangle
    shapePtr = &rec_one;
    shapePtr->canculateArea();
    shapePtr->calculatePeremeter();
    cout << "----------------------" << endl;

    // Triangle
    shapePtr = &trian_one;
    shapePtr->canculateArea();
    shapePtr->calculatePeremeter();
    cout << "----------------------" << endl;

    return 0;
}