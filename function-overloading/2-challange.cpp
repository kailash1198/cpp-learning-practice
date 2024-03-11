#include <iostream>
// Area Calculation :
//-    Write overloaded functions to calculate the area of:
// -       A square (takes one `double` side length)
// -       A rectangle (takes two `double` lengths for width and height)
// -       A circle (takes one `double` radius)

// Code
class baseClass
{
public:
    void calculateArea()
    {
        std::cout << "Calculate area function in base class - function overloading" << std::endl;
    }
};
class square : public baseClass
{

public:
    double calculateArea(double length)
    {
        int area = length * length;
        return area;
    }
};

class rectangle : public baseClass
{
public:
    double calculateArea(double length, double width)
    {
        double area = length * width;
        return area;
    }
};

class circle : public baseClass
{
public:
    double calculateArea(double radious)
    {
        double area = 3.14 * radious * radious;
        return area;
    }
};

int main(void)
{
    square squareOne;

    double squareArea = squareOne.calculateArea(10);
    std::cout << "Square Area = " << squareArea << std::endl
              << std::endl;

    rectangle recOne;
    double rectangleArea = recOne.calculateArea(20, 10);
    std::cout << "Rectangle Area = " << rectangleArea << std::endl
              << std::endl;

    circle cirOne;
    double circleArea = cirOne.calculateArea(5);
    std::cout << "Circle Area = " << circleArea << std::endl
              << std::endl;
}