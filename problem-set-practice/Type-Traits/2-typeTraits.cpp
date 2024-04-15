#include <iostream>
#include <type_traits>
using namespace std;

template <typename T>

bool typeChecking()
{
    return is_integral<T>::value;
}

int main()
{
    cout << typeChecking<float>() << endl;
    if (typeChecking<float>() == 1)
    {
        cout << "Int type" << endl;
    }
    else
    {
        cout << "Not int type" << endl;
    }
    return 0;
}