#include <iostream>
#include <math.h>
using namespace std;

class baseClass
{
public:
    baseClass() = default;
    baseClass(baseClass &obj)
    {
        cout << "This is base class copy constructor" << endl;
    }
};

int main()
{
    // int num = 16;
    // int newNum = sqrt(num);
    // cout<<newNum<<endl;

    // int n = 14;
    // for (int i = 2; i <= sqrt(n); i++)
    // {
    //     if (n % i != 0)
    //     {
    //         cout << "Prime" << endl;
    //     }
    //     else
    //     {
    //         cout << "Not prime" << endl;
    //     }
    // }

    baseClass obj1;
    baseClass obj2;

    // obj1=obj2;
    return 0;
}