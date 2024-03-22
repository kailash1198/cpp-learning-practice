#include <iostream>
#include <iterator>
#include <list>
using namespace std;

int sum_number(list<int> numData)
{
    int sum = 0;
    list<int>::iterator it = numData.begin();
    while (it != numData.end())
    {
        it++;
        sum += *it;
    }
}

int main(void)
{
    // ➡️ {1} Write a program to find the sum of two numbers.
    list<int> numberList = {1, 2, 3, 4, 5};
}