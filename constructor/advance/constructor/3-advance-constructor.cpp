#include <iostream>
using namespace std;
// Initializer List - Inialiaze member variable directly when constructor declare

class classOne
{
private:
    int one;
    int two;

public:
    classOne(int a, int b) : one(a), two(b)
    {
        cout << one << endl;
        cout << two << endl;
    }

    classOne(int a) : one(a)
    {
        cout << one << endl;
    }
};

int main(void)
{
    classOne objOne(10, 20), objTwo(100);
}