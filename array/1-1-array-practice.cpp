#include <iostream>
using namespace std;
// element insertion in array
int main(void)
{
    int element = 10;
    int myArray[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = 10;
    int position = 3;

    // before insertion
    for (int i = 0; i < size; i++)
    {
        cout << myArray[i] << " ";
    }

    // inserting process

    for (int j = 8; j >= position - 1; j--)
    {
        myArray[j+1] = myArray[j]; //important to understand
    }
    myArray[position - 1] = element;

    // after inserting
    cout << endl;
    cout << endl;
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << myArray[i] << " ";
    }
}