#include <iostream>
using namespace std;

int main(void)
{
    int row = 5;
    int colomn = 9;
    int j = 9;

    int spaceCount = 4;

    for (int i = 0; i < row; i++)
    {
        for (j = 9; j >= colomn; j--)
        {
            cout << " * ";
        }
        cout << endl;
        colomn = colomn - 2;
    }
}