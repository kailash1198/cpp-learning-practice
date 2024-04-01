#include <iostream>
using namespace std;
// Write a program to print even numbers between 1 and 20 using a for loop.

int main(void)
{
    for (int i = 2; i <= 20; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
        }
       
    }
}