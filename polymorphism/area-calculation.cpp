#include <iostream>
using namespace std;
class shape
{
public:
    virtual void areaCalulation()
    {
    }
};

class circle : public shape
{
private:
    int radious;

public:
    circle(int r)
    {
        radious = r;
    }

    int areaCalulation(int a)
    {
        int area = 3.14 * radious * radious;
        return area;
    }
};

// class rectangle : public shape
// {
// private:
//     int length;
//     int width;
// public:
//     rectangle(int l, int w)
//     {
//         length = l;
//         width = w;
//     }
//     void areaCalulation()
//     {
//         int area = length * width;
//     }
// };

int main(void)
{
    shape *ptr;
    circle circleOne(10);
    ptr = &circleOne;
    cout<<circleOne.areaCalulation(10)<<endl;

}