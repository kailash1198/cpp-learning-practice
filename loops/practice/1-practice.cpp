#include <iostream>
using namespace std;
// Loops flow understanding and practice
// While Loop

bool isPrime(int num)
{
    int i = 2;
    while (i * i <= num)
    {
        if (num % i == 0)
        {
            return false;
        }
        i++;
    }
    return true;
}
int main(void)
{
    // int num = 100;
    // while (num >= 0)
    // {
    //     cout << "Number : " << num << " ";
    //     num--;
    // };

    // 1. Write a program to calculate the sum of all numbers from 1 to N, where N is provided by the user.

    // int n;
    // int i = 0;
    // int sum = 0;
    // cout << "Enter n : ";
    // cin >> n;

    // while (i <= n)
    // {
    //     sum += i;
    //     i++;
    // }
    // cout << "N sum is : " << sum << endl;

    // 2. Create a program to find the factorial of a given number using a loop.
    // int i = 1;
    // int n;
    // int total = 1;
    // cout << "Please enter number : ";
    // cin >> n;
    // while (i <= n)
    // {
    //     total *= i;
    //     i++;
    // }

    // cout << "Fraction = " << total << endl;

    // 3. Write a program to check if a given number is prime or not.
    int userNum;
    cout << "Enter number for checking : ";
    cin >> userNum;

    if (isPrime(userNum))
    {
        cout << "Prime number" << endl;
    }
    else
    {
        cout << "This is not prime number" << endl;
    }
}
