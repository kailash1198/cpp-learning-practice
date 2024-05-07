#include <iostream>
using namespace std;
#include <iterator>
#include <vector>

// Write a program that finds the maximum element in a vector of integers.

int main()
{

    vector<int> myData = {1, 2, 30, 40, 58877, 6};
    int maxNum = 0;
    vector<int>::iterator it;

    for (it = myData.begin(); it < myData.end(); it++)
    {
        for (int i = 0; i < 6; i++)
        {
            if (myData[i] < myData[i+1])
            {
                int temp = myData[i];
                myData[i] = myData[i+1];
                myData[i+1] = temp;
                maxNum = myData[0];
            }
        }
    }

    cout << maxNum << endl;
}