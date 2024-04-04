#include <iostream>
using namespace std;
template <typename userType>
userType addNum(userType a, userType b)
{
    return a + b;
}
int main()
{
    double doubleNumSum = addNum(10.22, 23.12);
    cout<<doubleNumSum<<endl;

    cout<<addNum(12.2, 2.3)<<endl;
    cout<<addNum(10, 20)<<endl;
    cout<<addNum(10.0, 23.2)<<endl;
    return 0;
}