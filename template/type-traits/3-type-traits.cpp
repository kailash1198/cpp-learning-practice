#include <iostream>
#include <type_traits>
using namespace std;
template <typename myType>
void myFunction()
{
    if (is_arithmetic<myType>::value)
    {
        cout << "Argument is arithmatic" << endl;
    }
    else
    {
        cout << "Argument is not arithmatic" << endl;
    }
}

int main()
{

    myFunction<int>();
    return 0;
}