#include <deque>
#include <iostream>
#include <iterator>
#include <list>
#include <map>
#include <vector>
using namespace std;

void functionOne(vector<int> arr)
{
    vector<int>::iterator it;
    for (it = arr.begin(); it != arr.end(); it++)
    {
        cout << *it << endl;
    }
}

int main(void)
{
    vector<int> myArray = {1,2,3,4,5};
    functionOne(myArray);
}