#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    vector<int> numberList;

    cout << "Please enter the number One : ";
    int num;
    cin >> num;

    numberList.push_back(num);
    cout << "Num = " << numberList[0] << endl;

    numberList.empty();
    cout << "Num = " << numberList[0] << endl;
}