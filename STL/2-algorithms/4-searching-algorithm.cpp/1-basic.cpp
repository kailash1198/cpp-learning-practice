#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
using namespace std;
// Binary search algorithm -
int main(void)
{
    vector<int> listOne = {6, 2, 2, 7, 1, 35};

    bool find_num = binary_search(listOne.begin(), listOne.end(), 6);
    cout << find_num << endl;
}