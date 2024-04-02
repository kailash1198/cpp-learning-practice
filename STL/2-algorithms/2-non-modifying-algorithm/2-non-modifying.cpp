#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

int main(void)
{
    int array[] = {1, 1, 1, 2, 3, 4, 5};
    vector<int> number_list = {1, 1, 1, 2, 3, 4, 5};
    vector<int> data_list = {3, 4, 1, 1, 1, 2, 3, 4, 5};

    // ▶️ count( ) algorithm
    //  int digit_count = count(number_list.begin(), number_list.end(), 1);
    //  cout<<digit_count<<endl;

    // ▶️ equal() algorithm
    // bool compareValue_one = equal(array, array + 7, number_list.begin());
    // cout << compareValue_one << endl;

    // vector<int>::iterator a = number_list.begin();
    // vector<int>::iterator b = number_list.end();

    // bool comapareValue_two = equal(a, b, data_list.begin());
    // cout << comapareValue_two << endl;

    // ▶️ search() algorithm
    // vector<int>::iterator a = data_list.begin();
    // vector<int>::iterator b = data_list.end();

    // vector<int>::iterator c = number_list.begin();
    // vector<int>::iterator d = number_list.end();

    // vector<int>::iterator it = search(a, b, c, d);

    // if (it != data_list.end())
    // {
    //     cout << "Start from index : " << it - data_list.begin() << endl;
    // }
    // else
    // {
    //     cout << "The value is not in the vector" << endl;
    // }
}