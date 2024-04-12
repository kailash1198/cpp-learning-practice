#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
using namespace std;
// Binary search algorithm - binary serach algorithm are work only on sorted array or sorted data structure
int main(void)
{
    vector<int> listOne = {1, 2, 3, 4, 5, 6, 7};

    bool find_num = binary_search(listOne.begin(), listOne.end(), 8);
    cout << find_num << endl;
}