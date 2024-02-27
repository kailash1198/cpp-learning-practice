#include <algorithm>
#include <iostream>
using namespace std;
// function practice
int main(void)
{
    int numArray[4] = {100, 20000, 30, 40};
    int sizeOfArray = sizeof(numArray) / sizeof(numArray[0]);
    cout << sizeOfArray << endl;

    sort(numArray, numArray + 4);
    for (int i = 0; i < sizeOfArray; i++)
    {
        cout << numArray[i] << endl;
    }

    // cout << numArray << endl;
    // cout << numArray + 4 << endl;
}