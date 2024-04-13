#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    // int num = 16;
    // int newNum = sqrt(num);
    // cout<<newNum<<endl;

    int n = 14;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i != 0)
        {
            cout << "Prime" << endl;
        }
        else
        {
            cout << "Not prime" << endl;
        }
    }
    return 0;
}