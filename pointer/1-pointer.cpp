#include <iostream>
using namespace std;
// address of othe variables in memory

int main(void)
{
    int numOne = 100;
    int *numTwo = &numOne;
    int **numThree = &numTwo;
    int ***numFour = &numThree;
    cout << *numTwo << endl;

    cout << numFour << endl;
    cout << *numFour << endl;
    cout << **numFour << endl;
    cout << ***numFour << endl;
}