#include <iostream>
using namespace std;
// Write a program to dynamically allocate memory for an array of integers and initialize it with user input.
int main()
{
    int *myArray;
    int size;
    cout<<"Size : ";
    cin>>size;

    myArray = new int(size);

    for(int i=0; i<size; i++){
        cin>>myArray[i];
    }
    cout<<"Your input : ";
    for(int i=0; i<size; i++){
        cout<<myArray[i]<<" ";
    }

    delete myArray;
    return 0;
}