#include <iostream>
using namespace std;
#define PI_VALUE 3.14
class circle
{
private:
    double radious;

public:
    double area(double a)
    {
        radious = a;
        double area = PI_VALUE * radious * radious;
        return area;
    }

    double parameter(int b)
    {
        radious = b;
        double peremeterCalculate = 2 * PI_VALUE * radious;
        return peremeterCalculate;
    }
};

class rectangle
{
private:
    double length;
    double width;

public:
    double area(double a, double b)
    {
        length = a;
        width = b;

        double area_rectangle = length * width;
        return area_rectangle;
    }

    double peremeter(double a, double b)
    {
        length = a;
        width = b;

        double peremeter_rectangle = 2 * (length * width);
        return peremeter_rectangle;
    }
};

class tringle
{
private:
    double base;
    double height;
    double side[3];

public:
    double area(double a, double b)
    {
        base = a;
        height = b;

        double area_tringle = (base * height) * 1 / 2;
        return area_tringle;
    }

    double peremeter(double a, double b, double c)
    {
        side[0] = a;
        side[1] = b;
        side[2] = c;

        double peremeter_tringle = side[0] + side[1] + side[2];
        return peremeter_tringle;
    }
};

int main(void)
{
    circle one;
    double areaOfCircle = one.area(12);
    double peremeter_circle = one.parameter(15);
    cout << areaOfCircle << endl;
    cout << peremeter_circle << endl;

    rectangle two;
    double areaOfRectangle = two.area(11, 12);
    double peremeterOfRectangle = two.peremeter(34, 12);
    cout << areaOfRectangle << endl;
    cout << peremeterOfRectangle << endl;

    tringle three;
    double areaOfTriangle = three.area(79, 34);
    double peremeterOfTringle = three.peremeter(10, 20, 30);
    cout << areaOfTriangle << endl;
    cout << peremeterOfTringle << endl;
}