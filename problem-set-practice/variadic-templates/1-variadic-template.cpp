#include <iostream>
#include
using namespace std;

template <typename... Args>
int myFunc(Args... parameter)
{
    int sum = 0;
    // Expand the parameter pack using '...' before using it in the loop
    // This allows the compiler to know that you want to iterate over each element of the pack
    // Expand the pack and sum up the values
    (..., (sum += parameter)) return sum;
}

int main()
{
    int result = myFunc(1, 2, 3);
    cout << "Result: " << result << endl;
    return 0;
}
