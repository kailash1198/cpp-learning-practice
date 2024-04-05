#include <iostream>
using namespace std;

// base case
void printArguement()
{
    cout << endl;
}

// recursive function to print arguments
template <typename T, typename... arguments>
void printArguement(T first, arguments... argumentList)
{
    cout << first << " ";
    printArguement(argumentList...);
}

int main()
{
    printArguement(1, "Kailash", 4, 5, 6);
    return 0;
}