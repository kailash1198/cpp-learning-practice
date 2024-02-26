#include <iostream>
using namespace std;
// function logic
// Problem Statement -  Implement a function to compute the average of elements in an integer array.
int averageNumber(int myArray[], int n)
{
    myArray[n];
    int average = 0;
    for (int i = 0; i < n; i++)
    {
        average += myArray[i];
    }

    return average / n;
}

int main(void)
{
    int num = 1;

    cout << "How many number you want get average : ";
    cin >> num;
    int myNumList[sizeof(num)];
    cout << endl;
    cout << "Please enter number : ";
    for (int i = 0; i < num; i++)
    {
        cin >> myNumList[i];
    }

    int answer = averageNumber(myNumList, num);
    cout << "Average = " << answer << endl;
}