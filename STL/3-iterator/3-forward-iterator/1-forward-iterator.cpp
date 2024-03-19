#include <iostream>
#include <list>
#include <vector>
using namespace std;
// Forward iterator - read + write(assign) in forward sequence direction
int main(void)
{
    // Using List
    list<int> myList = {1, 2, 3, 4, 5};
    list<int>::iterator it = myList.begin();

    while (it != myList.end())
    {
        cout << *it << endl;
        it++;
    }

    // Using Vector
    vector<double> dataList = {6, 7, 8, 9, 10};
    vector<double>::iterator i = dataList.begin();
    while (i != dataList.end())
    {
        cout << *i << endl;
        i++;
    }
}