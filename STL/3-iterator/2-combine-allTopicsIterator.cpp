#include <deque>
#include <iostream>
#include <list>
#include <map>
#include <vector>
using namespace std;

int main(void)
{
    list<int> dataList = {1, 2, 3, 4, 5};
    list<int>::iterator it = dataList.begin();
    list<int>::iterator back_it = dataList.end();

    // Understanding Forward and Backward Traversing
    while (it != dataList.end())
    {
        cout << *it << endl;
        it++;
    }

    while (back_it != dataList.begin())
    {
        cout << *back_it << endl;
        --back_it;
    }
}