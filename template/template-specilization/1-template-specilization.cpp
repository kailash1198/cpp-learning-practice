#include <iostream>
using namespace std;

template <typename userDefined>
void funcOne()
{
    cout << "This is base function" << endl;
}

void funcOne(userDefined a, userDefined b)
{
    cout << a << endl;
    cout << b << endl;
}

template <>
void funcOne<int>(int value)
{
}
int main()
{

    return 0;
}