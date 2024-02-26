#include <iostream>
using namespace std;
// find the Greatest Common Divisor (GCD) and Least Common Multiple (LCM) of two numbers.

float gcd(float a, float b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

float lcm(float a, float b)
{
    if (b == 0)
    {
        return 1;
    }
    return lcm(b, a % b);
}

int main(void)
{
}