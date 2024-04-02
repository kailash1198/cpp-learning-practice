#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
using namespace std;
// this is return before number element position iterator
int main(void)
{
    vector<int> listOne = {1, 2, 3, 4, 5, 6, 7, 8};
    auto a = lower_bound(listOne.begin(), listOne.end(), 8);
    cout << "Lower bound : " << distance(listOne.begin(), a) << endl;
}