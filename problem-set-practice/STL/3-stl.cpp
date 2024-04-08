#include <deque>
#include <iostream>
#include <iterator>
using namespace std;
// Implement a program to demonstrate the usage of deque container.
int main()
{
    deque<int> dataList;
    dataList.push_back(1);
    dataList.push_back(2);
    dataList.push_back(3);
    dataList.push_back(4);
    dataList.push_back(5);
    dataList.push_back(6);
    deque<int>::iterator it = dataList.begin();
    while (it != dataList.end())
    {
        cout << *it << endl;
        it++;
    }
    return 0;
}