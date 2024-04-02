#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

int main(void)
{
    vector<int> listOne = {5, 6, 7, 1,0, 35};

    vector<int>::iterator minElement = min_element(listOne.begin(), listOne.end());
    cout << *minElement << endl;
}