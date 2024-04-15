#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Defined size of the array : ";
    cin >> size;

    int *newArray = new int(size);
    for (int i = 0; i < size; i++)
    {
        cin >> newArray[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout << newArray[i] << " ";
    }

    delete newArray;
    return 0;
}