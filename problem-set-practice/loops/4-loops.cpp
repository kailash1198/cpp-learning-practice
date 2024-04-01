#include <iostream>
using namespace std;
// Write a program to find the sum of digits of a number using a while loop.

int sumCalculation(int num)
{
    int sum = 0;
    for (int i = 1; i <= num; i++)
    {
        sum += i;
    }

    return sum;
}

int main(void)
{
    int sumOf_number = sumCalculation(50);
    cout<<sumOf_number<<endl;
}