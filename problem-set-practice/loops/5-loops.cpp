#include <iostream>
using namespace std;
// Write a program to print the Fibonacci series up to n terms using a for loop.
void fibonacci(int n)
{
    int first = 0;
    int second = 1;
    int next;

    for (int i = 0; i < n; ++i)
    {
        if (i <= 1)
            next = i;
        else
        {
            next = first + second;
            first = second;
            second = next;
        }
        cout << next << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number of terms for Fibonacci Series: ";
    cin >> n;

    fibonacci(n);

    return 0;
}
