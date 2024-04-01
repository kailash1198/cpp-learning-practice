#include <iostream>
using namespace std;

// Write a program to calculate the factorial of a number using a for loop.

int factorialOfNumber(int num)
{
    int startPoint = 1;
    int sum = 1;
    for(int i=1; i<=num; i++){
        sum*=i;
    }
    return sum;
}

int main(void)
{
    int result = factorialOfNumber(3);
    cout<<result<<endl;

}