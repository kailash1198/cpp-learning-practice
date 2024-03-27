#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main(void)
{
    vector<int> dataList;


    // insertion
    dataList.push_back(1);
    dataList.push_back(2);
    dataList.push_back(3);
    dataList.push_back(4);
    dataList.push_back(5);

    // deletion
    dataList.pop_back();
    dataList.pop_back();
    // dataList.pop_back();
    // dataList.pop_back();
    // dataList.pop_back();

    // Traversing
    vector<int>::iterator it = dataList.begin();
    while (it != dataList.end())
    {
        cout << *it << endl;
        it++;
    }

}