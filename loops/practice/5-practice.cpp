#include <iostream>
using namespace std;

int main(void)
{
    int number = 10;
    for (int i = 2; i < 10; i++)
    {
        if (number % i != 0)
        {
            cout << "Not Prime" << endl;
        }
        else
        {
            cout << "Prime" << endl;
        }
    }
}