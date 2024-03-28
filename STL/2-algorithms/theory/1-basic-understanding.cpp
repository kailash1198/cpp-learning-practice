#include <algorithm>
#include <iostream>
#include <list>
#include <iterator>
using namespace std;

int main(void)
{
    list<int> listOne = {10, 200, 3, 4, 5};
    list<int>::iterator it = listOne.begin();
    sort(listOne.begin(), listOne.end());

    while (it != listOne.end())
    {
        cout << *it << endl;
        it++;
    }
}