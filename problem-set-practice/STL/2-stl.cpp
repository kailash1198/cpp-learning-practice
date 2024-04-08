#include <iostream>
#include <iterator>
#include <list>
using namespace std;
// Write a program to demonstrate the usage of list container.
int main()
{
    list<int> listOne;
    listOne.push_back(1);
    listOne.push_back(2);
    listOne.push_back(3);
    listOne.push_back(4);

    listOne.push_front(10);
    listOne.push_front(20);
    list<int>::iterator it = listOne.begin();
    while (it != listOne.end())
    {
        cout << *it << endl;
        it++;
    }
    return 0;
}