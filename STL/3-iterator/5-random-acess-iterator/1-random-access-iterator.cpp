#include <array>
#include <iostream>
#include <list>
#include <vector>

using namespace std;
int main(void)
{
    array<int, 5> numberList = {1, 2, 3, 4, 5};
    array<int, 5>::iterator it = numberList.begin();

    while (it != numberList.end())
    {
        cout << *it << endl;
        it++;
    }

    cout<<numberList[2];
}