#include <iostream>
using namespace std;

int main(void)
{
    int numOne = 9.76;
    double newType = static_cast<double>(numOne);

    // check using sizeof
    cout << sizeof(numOne) << endl;  // 4 bytes
    cout << sizeof(newType) << endl; // 8 bytes
}