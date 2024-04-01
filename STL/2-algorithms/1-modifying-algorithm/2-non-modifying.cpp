#include <algorithm>
#include <deque>
#include <iostream>
#include <iterator>
#include <list>
#include <vector>

using namespace std;
// Non-modifying algorithm
int main(void)
{
    // count(first_element, last_element, value);
    list<int> listOne = {1, 1, 1, 1, 1, 2, 3, 4, 5};
    int occur_count = count(listOne.begin(), listOne.end(), 1);
    cout << "Occurance in container : " << occur_count << endl;

    list<string> userList = {"aryan", "aryan", "kailash", "shyam"};
    int count_str_name = count(userList.begin(), userList.end(), "aryan");

    cout << "Occur in container : " << count_str_name << endl;

    // equal(first_element, last_element, container_two_first);
    vector<int> data_one = {1, 2, 3, 4, 5};
    vector<int> data__two = {1, 2, 3, 4, 5};

    bool result = equal(data_one.begin(), data_one.end(), data__two.begin(), data__two.end());
    vector<int>::iterator a = data_one.begin();

    cout << result << endl;

    // search();
    vector<int> list_one = {1, 2, 3, 4, 5};
    vector<int> list_two = {6, 7, 8, 9, 10};

    // auto it = search(listOne.begin(), list_one.end(), list_two.begin(), list_two.end());

}