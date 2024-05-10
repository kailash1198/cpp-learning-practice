#include <iostream>
// Implement a function to find the maximum element in an array using pointers.
void maxElement(int *myArray, int size)
{

    int *maxElement = &myArray[0];

    for (int i = 0; i < size-1; i++)
    {
        if (*maxElement < *(myArray + i + 1))
        {
            int temp = *maxElement;
            *maxElement = *(myArray + i + 1);
            *(myArray + i + 1) = temp;
        }
    }

    std::cout << "Max : " << *maxElement << std::endl;
    delete myArray;
}
int main()
{
    int array[6] = {1, 2, 30, 4, 5, 6};
    maxElement(array, 6);

    return 0;
}