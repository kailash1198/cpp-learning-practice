#include <iostream>
using namespace std;

int main()
{
    int numOne = 10;

    int *intPtr = &numOne;

    // Int* to void*
    void *voidPtr = static_cast<void *>(intPtr);

    // void* to float*
    float *floatPtr = static_cast<float *>(voidPtr);
    return 0;
}