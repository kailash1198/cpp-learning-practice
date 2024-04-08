#include <iostream>
#include <iterator>
#include <set>
using namespace std;
// Write a program to demonstrate the usage of set container.
int main()
{
    set<int> listOne = {5, 4, 3, 2, 1};
    for (int val : listOne)
    {
        cout << val << endl;
    }
    return 0;
}