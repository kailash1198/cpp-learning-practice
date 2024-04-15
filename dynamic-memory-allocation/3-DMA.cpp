#include <iostream>
using namespace std;

class classOne
{
private:
    int *ptr;
    int size;

public:
    classOne(int *ptrArray, int a)
    {
        ptr = ptrArray;
        size = a;
    }
    void memoryAllocate()
    {
        ptr = new int(size);
    }

    void takeInput()
    {
        for (int i = 0; i < size; i++)
        {
            cin >> ptr[i];
        }
    }

    void displayElement()
    {
        for (int i = 0; i < size; i++)
        {
            cout << ptr[i] << " ";
        }
    }
};

int main()
{
    int *arrayOnePtr;
    classOne arrayOne(arrayOnePtr, 5);
    arrayOne.memoryAllocate();
    arrayOne.takeInput();
    arrayOne.displayElement();

    return 0;
}