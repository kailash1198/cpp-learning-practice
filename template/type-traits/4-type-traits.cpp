#include <iostream>
#include <type_traits>
using namespace std;

template <typename user_type>

void typeCheck()
{
    if (is_arithmetic<user_type>::value)
    {
        cout << "Argument is arithmatic type" << endl;
    }
    else
    {
        cout << "Argument is not arithmatic type" << endl;
    }
}

int main()
{
    int numOne=10;
    typeCheck<int>();
    return 0;
}