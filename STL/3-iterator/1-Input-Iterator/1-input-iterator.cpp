#include <iostream>
#include <vector>
using namespace std;
// Input Iterator -
int main(void)
{
    vector<int> dataList;
    dataList.push_back(10);
    dataList.push_back(20);
    dataList.push_back(30);
    dataList.push_back(40);
    dataList.push_back(50);

    back_insert_iterator<vector<int>> back_inserter(dataList);
}
