#include <iostream>
#include <iterator>
#include <vector>
using namespace std;
int sum_calculate(vector<int> numList)
{
    vector<int>::iterator i = numList.begin();
    int sum = 0;
    while (i != numList.end())
    {
        sum += *i;
        i++;
    }
    return sum;
}

int average_calculate(vector<int> vectorData)
{
    int sum = 0;
    int average;
    int size = vectorData.size();
    vector<int>::iterator i = vectorData.begin();
    while (i != vectorData.end())
    {
        sum += *i;
        i++;
    }
    average = sum / size;
    return average;
}

int main(void)
{
    // vector<string> user_name = {"Kailash Kumar", "Laxmi Kumari"};
    // cout << user_name[0] << endl;
    // cout << user_name[1] << endl;
    // user_name[0] = "Aryan";
    // cout << user_name[0] << endl;

    // user_name.pop_back();
    // cout << user_name[0] << endl;
    // cout << user_name[1] << endl;

    // ➡️ {1} Write a program that initializes a vector of integers and prints its elements.
    // vector<int> number_list = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // vector<int>::iterator it = number_list.begin();
    // while (it != number_list.end())
    // {
    //     cout << *it << endl;
    //     it++;
    // }

    // ➡️ {2} Write a function that takes a vector of integers as input and returns the sum of all the elements.
    // vector<int> myData = {1, 2, 3, 4, 5};
    // int total = sum_calculate(myData);
    // cout << "Total = " << total << endl;

    // ➡️ {3} Write a function that takes a vector of integers as input and returns the average of all the elements.
    // vector<int> numberList = {2, 2, 2, 2, 2};
    // int averageNum = average_calculate(numberList);
    // cout << "Average = " << averageNum << endl;

    // ➡️ {4} Write a program that reads integers from the user and adds them to a vector until the user enters a specific value (e.g., -1). Then, print the vector.

    int userInput;
    vector<int> userNumberList;

    cout << "Please enter the number you want to store : ";
read_again_label:
    cin >> userInput;

    if (userInput > 0)
    {
        userNumberList.push_back(userInput);
        goto read_again_label;
    }
    else
    {
        vector<int>::iterator it = userNumberList.begin();
        while (it != userNumberList.end())
        {
            cout << *it << endl;
            it++;
        }
    }
}