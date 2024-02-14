#include <iostream>
#include <string>
using namespace std;
// Recursion - Call inself untill condition satisfied (Problem solving technique for breaking down problem to sub problems)

// int factorialFunc(int n)
// {
//     int result;
//     if (n == 0)
//     {
//         return 1;
//     }
//     else
//     {
//         result = n * factorialFunc(n - 1);
//     }
//     return result;
// }

// int addNumber(int num)
// {
//     int sum;
//     if (num == 0)
//     {
//         return 0;
//     }
//     sum = num + addNumber(num - 1);
//     return sum;
// }

// void counting(int num)
// {
//     if (num == 0)
//     {
//         return;
//     }
//     cout<<num<<endl;
//     counting(num - 1);
// }

int sumNum(int n)
{

    if (n == 0)
    {
        return 0;
    }

    int sum = n + sumNum(n - 1);
    return sum;
}

int main(void)
{

    int total = sumNum(5);
    cout << "Total is = " << total << endl;
    // int numResult = factorialFunc(4);
    // cout << numResult << endl;

    // int result = addNumber(5);
    // cout << "Sum = " << result << endl;

    // counting(10);
}