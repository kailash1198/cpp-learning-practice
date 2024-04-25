#include <iostream>
using namespace std;
// Pointer to structure members

struct dataList
{
    int numOne;
    int numTwo;
    int numThree;
};

int main()
{
    dataList list_one;

    dataList *listPtr = &list_one;
    listPtr->numOne=10;
    
    cout<<listPtr->numOne<<endl;
    return 0;
}