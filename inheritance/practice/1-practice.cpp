#include <iostream>
using namespace std;

// base class - shape
class shape
{
public:
    int calculateArea(int a, int b)
    {
        int area = a * b;
        return area;
    }

    int calculateArea(int a)
    {
        int area = 3.17 * a * a;
        return area;
    }

    int calculatePeremeter(int a, int b)
    {
        int peremeter = 2 * (a + b);
        return peremeter;
    }

    int calculatePeremeter(int r)
    {
        int peremeter = 2 * 3.17 * r;
        return peremeter;
    }
};

// Rectangle
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
};

// Circle
class circle : public shape
{
private:
    int radious;

public:
    circle(int a)
    {
        radious = a;
    }
};

int main(void)
{
    shape obj;
    rectangle recOne(10, 20);
    circle cirOne(20);

    int rec_area_result = recOne.calculateArea(10, 20);
    int rec_peremtere_result = recOne.calculatePeremeter(10, 20);

    int circle_area_result = cirOne.calculateArea(10);
    int circle_peremeter_result = cirOne.calculatePeremeter(10);
    cout << endl
         << endl;
    cout << "Rectangle area = " << rec_area_result << endl;
    cout << "Rectangle Peremeter = " << rec_peremtere_result << endl;

    cout << endl
         << endl;

    cout << "Circle area = " << circle_area_result << endl;
    cout << "Circle Peremeter = " << circle_peremeter_result << endl;
    cout << endl
         << endl;
}