#include <deque>
#include <iostream>
#include <list>
#include <vector>
using namespace std;
// Sequence container - Whatever element contain in container this is maintain order of elements.
// 1. Vector - Dynamic Array
// 2. List
int main(void)
{
    // ▶️ Vector
    // vector<int> numList = {1, 2, 3, 4, 5, 6};
    // vector<float> floatNumList = {10, 22, 34.56, 23, 56, 23.67};
    // vector<string> nameList = {"Kailash", "Aryan", "SIngh"};

    // cout << sizeof(numList) << endl;
    // cout << sizeof(floatNumList) << endl;
    // cout << sizeof(nameList) << endl;

    // cout<<numList[0]<<endl;
    // numList.push_back(70);
    // cout<<numList[6]<<endl;

    // ▶️ List
    // list<int> numList = {1, 2, 3, 4, 5};

    // cout<<sizeof(numList)<<endl;
    // numList.push_back(100);
    // numList.push_front(900);

    // ▶️ deque (Doubly ended queue)
    deque<int> numList = {1, 2, 3, 4, 5};
    cout << numList[0] << endl;
    cout << numList[4] << endl;

    numList.push_back(1000);
    numList.push_back(2000);
    numList.push_back(3000);

    numList.push_front(90);
    numList.push_front(80);
    numList.push_front(70);
    numList.push_front(60);
}
