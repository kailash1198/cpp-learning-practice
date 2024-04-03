// Implement a function to find the maximum element in an array using pointers.
#include <algorithm>
#include <iostream>
using namespace std;

int findMaxNumber(int *myArray)
{
    int size = sizeof(myArray) / sizeof(myArray[0]);
    int current = myArray[0];
    for (int i = 0; i < size; i++)
    {
        if (myArray[0] < myArray[i + 1])
        {
            current = myArray[i+1];
        }
    }
    return current;
}

int main()
{
    int dataList[] = {1, 2, 3, 4, 5};

    int result = findMaxNumber(dataList);
    cout << result << endl;
    return 0;
}