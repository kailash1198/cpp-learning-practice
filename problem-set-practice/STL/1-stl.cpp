#include <iostream>
using namespace std;
#include <iterator>
#include <vector>
// Implement a program to demonstrate the usage of vector container.
int main()
{
    vector<string> userName;
    userName.push_back("User-1");
    userName.push_back("User-2");
    userName.push_back("User-3");
    userName.push_back("User-4");
    userName.push_back("User-5");

    vector<string>::iterator it = userName.begin();
    while (it != userName.end())
    {
        cout << *it << endl;
        it++;
    }
    return 0;
}