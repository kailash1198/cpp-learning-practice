#include <iostream>
using namespace std;
// static polymorphism achieved using Templates

template <typename myTtype>

void funcOne(myTtype a)
{
    cout << "User specify = " << a << endl;
};

void funcOne(int a)
{
    cout << "Integer type = " << a << endl;
}

void funcOne(double a)
{
    cout << "Double type = " << a << endl;
}

int main()
{
    funcOne("Kailashg");
    return 0;
}