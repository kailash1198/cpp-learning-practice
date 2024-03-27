#include <algorithm>
#include <iostream>
#include <iterator>
#include <map>
#include <vector>
using namespace std;
// Write a program to sort elements in a vector using std::sort.

int main(void)
{
    vector<int> myData = {5, 3, 6, 8, 2, 1};
    // before sorting
    vector<int>::iterator i = myData.begin();
    while (i != myData.end())
    {
        cout << *i << " ";
        i++;
    }
    cout << endl;
    // after sorting
    vector<int>::iterator k;

    sort(myData.begin(), myData.end());

    for (k = myData.begin(); k != myData.end(); k++)
    {
        cout << *k << " ";
    }
}