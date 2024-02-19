#include <iostream>
using namespace std;

class circle
{
private:
    float area;

public:
    circle()
    {
        area = 0;
    }

    float areaOfCircle(int r)
    {
        area = 3.14 * (r * r);
        return area;
    }
};

int main(void)
{
    circle area1;
    float area1Result = area1.areaOfCircle(123);
    cout << "The result : " << area1Result << endl;
}