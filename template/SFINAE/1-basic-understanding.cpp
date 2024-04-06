#include <iostream>
using namespace std;
// template function overloading
template <typename userType>
userType funcOne(userType a)
{
    return a;
};

template <typename newType>
newType funcOne(newType a, newType b)
{
    return a+b;
};

int main()
{
    int numOne = funcOne(20);
    cout<<numOne<<endl;

    int numTwo = funcOne(10,20);
    cout<<numTwo<<endl;
    return 0;
}