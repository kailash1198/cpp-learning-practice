#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

int main(void)
{
    vector<int> listOne = {5, 6, 7, 1, 35, 3, 6, 8, 12};
    vector<int> listTwo = {17, 8, 28, 63, 745};

    vector<int>::iterator a = listOne.begin();
    partial_sort(listOne.begin(), listOne.begin() + 2, listOne.end());
    while (a != listOne.end())
    {
        cout << *a << endl;
        a++;
    }
}