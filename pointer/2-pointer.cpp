#include <iostream>
using namespace std;

int main(void)
{
    int *ptrArray[5];
    int myArray[5] = {10, 20, 30, 40, 50};
    for (int i = 0; i < 5; i++)
    {
        ptrArray[i] = &myArray[i];
    }

    for (int j = 0; j < 5; j++)
    {
        cout << *ptrArray[j] << endl;
    }
}