#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
using namespace std;
// This algo also work on sorted data strucrure and this for search value in data list
int main(void)
{
    vector<int> listOne = {1, 2, 3, 4, 5, 6};

    // vector<int>::iterator a;
    auto a = equal_range(listOne.begin(), listOne.end(), 6);
    cout << distance(listOne.begin(), a.first) << endl;
    cout << distance(listOne.begin(), a.second) << endl;
}