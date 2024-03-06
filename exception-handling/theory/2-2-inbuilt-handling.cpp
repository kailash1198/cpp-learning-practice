#include <iostream>
#include <stdexcept>
using namespace std;

int main(void)
{
    // Exception handling
    int numOne = -1;
    cout << "Before try block" << endl;

    // try block - for monitor exception - If exception occurs then control tranfer to catch block
    try
    {
        cout << "Inside try block" << endl;
        if (numOne < 0)
        {
            throw numOne;
            cout << "After throw" << endl; // not executed because control transfer to catch block
        }
    }   
    catch (int numOne)
    {
        cout << "Exception caught" << endl;
    }

    cout << "After catch will be executed" << endl;
}