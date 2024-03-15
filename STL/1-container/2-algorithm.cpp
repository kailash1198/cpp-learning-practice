#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    vector<int> numList = {10, 5, 2, 30};
    sort(numList.begin(), numList.end());

    // After sorting
    for (int i = 0; i < 4; i++)
    {
        cout << numList[i] << endl;
    }
}