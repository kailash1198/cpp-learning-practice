#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

int main(void)
{
    vector<int> listOne = {5, 6, 7, 1, 35};
    vector<int>::iterator maxElement = max_element(listOne.begin(), listOne.end());
    cout << *maxElement << endl;
}