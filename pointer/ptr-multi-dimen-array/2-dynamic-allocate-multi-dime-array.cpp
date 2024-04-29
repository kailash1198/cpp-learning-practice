#include <iostream>
using namespace std;

int main()
{
    int row, colomn;
    cout << "Enter row size: ";
    cin >> row;
    cout << "Enter colomn size: ";
    cin >> colomn;

    int **myArray = new int *[row];

    // Allocate memory
    for (int i = 0; i < row; i++)
    {
        myArray[i] = new int[colomn];
    }

    // Iniliaze and print the array
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colomn; j++)
        {
            myArray[i][j] = i * colomn + j;
            cout << myArray[i][j] << endl;
        }
    }

    // delete the memory
    for (int i = 0; i < row; i++)
    {
        delete[] myArray[i];
    }

    delete[] myArray;
    return 0;
}