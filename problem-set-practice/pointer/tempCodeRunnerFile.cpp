#include <iostream>
// Implement a function to find the maximum element in an array using pointers.
void maxElement(int *myArray, int size)
{
    myArray = new int(size);
    int *maxElement;

    for (int i = 0; i < size; i++)
    {
        if (myArray[i] < myArray[i + 1])
        {
            int *temp = &myArray[i];
            myArray[i] = myArray[i + 1];
            myArray[i + 1] = *temp;
        }
        maxElement = &myArray[0];
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