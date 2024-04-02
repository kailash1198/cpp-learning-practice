#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
using namespace std;
// this algo work on sorted data structure and this is use for perform binary search operation
// upper bound return upper last iterator
int main(void)
{
    vector<int> listOne = {1,2,3,4,5,6,7,8};
    auto a = upper_bound(listOne.begin(), listOne.end(), 8);
    cout << "Upper bound : " << distance(listOne.begin(), a) << endl;
}