#include <iostream>
// using namespace std;

void reverse_dig(int &a, int &b)
{
    // Add your code here.
    int originalNumber_one = a;
    int originalNumber_two = b;

    int reminder_one;
    int reminder_two;

    int reverse_one = 0;
    int reverse_two = 0;

    while (a != 0)
    {
        reminder_one = a % 10;
        reverse_one = reverse_one * 10 + reminder_one;
        a /= 10;
    }

    while (b != 0)
    {
        reminder_two = b % 10;
        reverse_two = reverse_two * 10 + reminder_two;
        b /= 10;
    }

    std::cout << reverse_one << std::endl;
    std::cout << reverse_two << std::endl;
}
int main()
{
    int a = 123;
    int b = 456;
    reverse_dig(a, b);
    return 0;
}
