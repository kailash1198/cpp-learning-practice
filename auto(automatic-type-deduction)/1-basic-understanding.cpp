#include <iostream>
using namespace std;
// Auto - use for automatic type deduction

// when use auto compiler know auto that means its compiler responsiblity to know to type of identifiers.

auto funcOne()
{
    cout << "This is function one return is auto type" << endl;
}

auto numPrint(int num)
{
    return num;
}

int main(void)
{
    auto numOne = 10;
    cout << numOne << endl;
    cout << sizeof(numOne) << endl;

    funcOne();

    cout<<numPrint(10)<<endl;
}