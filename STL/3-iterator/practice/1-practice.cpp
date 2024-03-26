#include <array>
#include <iostream>
using namespace std;
int sumArrayElement(array<int, 5> arr)
{
    array<int, 5>::iterator l = arr.begin();
    int total = 0;
    while (l != arr.end())
    {

        total += *l;
        l++;
    }
    return total;
}
int main(void)
{

    array<int, 5> dataList;
    cout << "Please enter the element : ";
    array<int, 5>::iterator it = dataList.begin();
    array<int, 5>::iterator i = dataList.begin();
    while (it != dataList.end())
    {
        cin >> *it;
        it++;
    }
    system("cls");
    int totalSum = sumArrayElement(dataList);
    cout << "Total  = " << totalSum << endl;
}