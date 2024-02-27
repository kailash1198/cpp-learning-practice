#include <iostream>
using namespace std;
// array sorting practice
int main(void)
{
    int myArray[5] = {5, 4, 3, 2, 1};
    // before sorting
    for (int i = 0; i < 5; i++)
    {
        cout << myArray[i] << " ";
    }
    cout << endl;
    // sorting logic
    for (int i = 0; i < 5; i++)
    {

        if (myArray[i] > myArray[i + 1])
        {
            int temp = myArray[i];
            myArray[i] = myArray[i + 1];
            myArray[i + 1] = temp;
        }
    }
    // after sorting
    for (int i = 0; i < 5; i++)
    {
        cout << myArray[i] << " ";
    }
    cout << endl;
}