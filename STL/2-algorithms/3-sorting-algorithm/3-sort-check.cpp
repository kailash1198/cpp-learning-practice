#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

int main(void)
{
    vector<int> listOne = {1, 2, 3, 4, 5, 6, 7};
    vector<int> listTwo = {17, 8, 28, 63, 745};

    bool check_sort = is_sorted(listOne.begin(), listOne.end());
    cout << check_sort << endl;

    if (check_sort == true)
    {
        cout << "Sorted" << endl;
    }
    else
    {
        cout << "Not sorted" << endl;
    }
}