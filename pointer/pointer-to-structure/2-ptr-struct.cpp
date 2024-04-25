#include <iostream>
using namespace std;
// Dynamic memory allocation for structure using pointers

struct userData
{
    string userName;
    string userLocation;
    int userCode;
};

int main()
{
    userData data_one;

    userData *userDataPtr = new userData;

    userDataPtr->userName = "Name-1";
    cout << userDataPtr->userName << endl;

    delete userDataPtr;
    return 0;
}