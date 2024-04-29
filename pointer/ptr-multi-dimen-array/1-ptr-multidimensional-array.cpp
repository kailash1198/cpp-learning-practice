#include <iostream>
using namespace std;
// Pointer to multidimensional array
int main()
{
    int myArray[2][3] = {
        {1, 2, 3},
        {4, 5, 6}};

    // cout << myArray[1][2] << endl;

    // iterate array without pointer
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << myArray[i][j] << endl;
        }
    }

    // iterate array using pointer
    int *ptrOne = &myArray[0][0];

    for (int j = 0; j < 2 * 3; j++)
    {
        cout << *(ptrOne + j) << endl;
    }

    return 0;
}