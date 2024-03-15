#include <iostream>
using namespace std;

int main(void)
{
    const int numOne = 10;
    int *newType;
    const_cast<int *>(newType);

    cout << numOne << endl;
}