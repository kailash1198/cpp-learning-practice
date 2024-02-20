#include <iostream>
using namespace std;

int main(void)
{
    int row = 7;
    int colomn = 0;


    for (int i = 0; i < row; i++)
    {
        for (int k = 7; k > i; k--)
        {
            cout << " ";
            cout << " ";
            cout << " ";
        }

        for (int j = 0; j < colomn; j++)
        {
            cout << " * ";
        }
        cout << endl;
        colomn += 1;
    }
}