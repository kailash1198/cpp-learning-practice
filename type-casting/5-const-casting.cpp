#include <iostream>
using namespace std;
// Const Casting - Remove or add const to a variable.
// Using const cast you can modify variable in program.

void changeValue(int &num)
{
    num = 99;
}
int main(void)
{
    const int numOne = 10;
    // numOne = 20; // if you directly change const variable value then you get error

    // To overcome this you have to use const cast operator for remove const from variable.

    int &nonConstVariable = const_cast<int &>(numOne);

    changeValue(nonConstVariable);
    cout << numOne << endl;
}