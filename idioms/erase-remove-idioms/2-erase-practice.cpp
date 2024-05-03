#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

int main()
{

    vector<int> myList = {1, 2, 3, 4, 5};

    myList.erase(remove(myList.begin(), myList.end(), 1));

    for (int number : myList)
    {
        cout << number << endl;
    }

    return 0;
}