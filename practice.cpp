#include <iostream>
#include <string>
using namespace std;

// A step array is an array of integers where each element has a difference of at most k with its neighbor
// . Given a key x, we need to find the index value of x if multiple elements exist,
// and return the first occurrence of the key.

int search(int arr[], int n, int x, int k)
{
    // Complete the function
    int index;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            index = i;
        }
    }

    return index;
}

int main()
{
    int myArray[5] = {1, 2, 3, 4, 5};
    int size=5;
    int searchKey = 2;
    int indexValue;

    search(myArray, size, searchKey);
    return 0;
}
