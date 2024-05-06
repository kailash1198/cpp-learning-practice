#include <iostream>

// Template Specialization: Implement a template specialization for a function -> that swaps two elements in an array.

template <typename userType>

void swapElement(userType array[2], int size)
{

    for (int i = 0; i < 2; ++i)
    {
        std::cout << array[i] << " ";
    }


    std::cout << std::endl;
    
        userType temp = array[0];
        array[0] = array[1];
        array[1] = temp;
    

    for (int i = 0; i < 2; ++i)
    {
        std::cout << array[i] << " ";
    }
}

int main()
{
    std::string myArray[] = {"Kailash", "Kumar"};
    swapElement(myArray,2);

    return 0;
}