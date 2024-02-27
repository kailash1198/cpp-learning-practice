#include <iostream>
using namespace std;
//  Write a program to find the maximum element in an integer array.
int main(void)
{
    int myArray[5] = {10, 200, 30, 40, 50};
    int result;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (myArray[i] > myArray[j])
            {
                result = myArray[i];
            }
        }
    }

    cout << result << endl;
}