#include <iostream>
using namespace std;

int main(void)
{
    int num = 10;
    cout << "Before exception handling" << endl;
    try
    {
        if (num < 50)
        {
            throw num;
            cout << "Num less than 50" << endl;
        }
    }
    catch (int num)
    {

        cout << "Exception found" << endl;
    }
}