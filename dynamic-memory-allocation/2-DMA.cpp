#include <iostream>
using namespace std;

void memoryGive(int size, int *ptr)
{
    ptr = new int(size);

    for (int i = 0; i < size; i++)
    {
        cin >> ptr[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout << ptr[i] << " ";
    }

    delete ptr;
}

int main()
{
    int *arrayOne;
    int size = 5;
    memoryGive(size, arrayOne);

    delete arrayOne;
    return 0;
}