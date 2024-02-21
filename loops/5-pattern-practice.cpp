#include <iostream>
using namespace std;
// opposite tringle pattern
int main(void)
{
    int row = 5;
    int colomn = 9;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colomn; j++)
        {
            cout << " * ";
        }
        for (int i = 0; i < 4; i++)
        {
            cout << "  ";
        }

        cout << endl;
        colomn -= 2;
    }
}