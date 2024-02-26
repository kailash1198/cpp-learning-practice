#include <iostream>
using namespace std;

bool isPrime(int number)
{
    int devide = 2;
    while (devide * devide <= number) // square for compare Nth number
    {
        if (number % devide == 0)
        {
            return false;
        }
        devide++;
    }
    return true;
}

int main(void)
{
    int numOne = 11;
    if (isPrime(numOne))
    {
        cout << "Prime" << endl;
    }
    else
    {
        cout << "Not prime" << endl;
    }
}