#include <iostream>
#define ARRAY_SIZE 5
#define ARRAY_ELEMENT 1
#define ARRAY_ITERATORE 0

int main()
{
    int myArray[ARRAY_SIZE] = {ARRAY_ELEMENT, ARRAY_ELEMENT, ARRAY_ELEMENT, ARRAY_ELEMENT};
    for (int i = ARRAY_ITERATORE; i < ARRAY_SIZE; i++)
    {
        std::cout << myArray[i] << std::endl;
    }
}