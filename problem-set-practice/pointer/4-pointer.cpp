#include <iostream>
#include <cstring>
using namespace std;
// Write a program to reverse a string using pointers

void reverseString(char *str)
{
    int length = strlen(str);
    char *start = str;
    char *end = str + length - 1;

    while (start < end)
    {
        char temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}
int main()
{
    char str[100];
    std::cout << "Enter a string: ";
    std::cin.getline(str, 100);

    reverseString(str);

    std::cout << "Reversed string: " << str << std::endl;
    return 0;
}