#include <array>
#include <iostream>
using namespace std;

void maximumNum(array<int, 5> arr)
{
    array<int, 5>::iterator l;
    array<int, 5>::iterator k;
    int maxNum = arr[0];
    for (l = arr.begin(); l != arr.end(); ++l)
    {
        if (*l > maxNum)
        {
            maxNum = *l;
        }
    }

    cout << "Max num = " << maxNum << endl;
}

int main(void)
{
    array<int, 5> myArray = {1, 2, 30, 4, 5};

    maximumNum(myArray);
}