#include <iostream>
using namespace std;
#include <type_traits>

// Type Traits -
template <typename t>
void printTypeInfo()
{
    if (is_pointer<t>::value)
    {
        cout << "Type is a pointer" << endl;
    }
    else
    {
        cout << "Type is not a pointer" << endl;
    }

    if (is_arithmetic<t>::value)
    {
        cout << "Type is arithmatic" << endl;
    }
    else
    {
        cout << "Type is not arithmatic" << endl;
    }
}
int main()
{
    // printTypeInfo<int>();
    printTypeInfo<int*>();
    return 0;
}