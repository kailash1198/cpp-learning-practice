#include <iostream>
#include <string>
using namespace std;

// class firstClass
// {
// private:
// public:
//     int numOne;
//     int numTwo;
//     virtual void sumNum() = 0;
// };

// class secondClass : public firstClass
// {
// private:
// public:
//     void sumNum(int a, int b)
//     {
//         numOne = a;
//         numTwo = b;
//         int c = numOne + numTwo;
//         cout << "The sum c = " << c << endl;
//     }
// };

// class thirdClass : public firstClass{
//     public:
//     void sumNum(){

//     }
// };

// ▶️another example where abstraction classess are use
class shape
{
public:
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
};

// this for get circle Area and Perimeter
class circle : public shape
{
private:
    double radius;

public:
    circle(double r) : radius(r){};
    double area() const
    {
        return 3.14 * radius * radius;
    }

    double perimeter() const
    {
        return 2 * 3.14 * radius;
    }
};

// this get for rectangle Area and Perimeter

class rectangle : public shape
{
private:
    double width;
    double height;

public:
    rectangle(double w, double h) : width(w), height(h){};
    double area() const
    {
        return width * height;
    };

    double perimeter() const
    {
        return 2 * (width + height);
    };
};

main(void)
{
    // abstraction class concept and examples(in abstract class we always need atleast 1 virtual function)
    circle circle(5); //instance of abstract class
    rectangle rectangle(4, 6); //instance of abstract class

    cout << "Circle Area: " << circle.area() << ", Perimeter: " << circle.perimeter() << endl;
    cout << "Rectangle Area: " << rectangle.area() << ", Perimeter: " << rectangle.perimeter() << endl;
}