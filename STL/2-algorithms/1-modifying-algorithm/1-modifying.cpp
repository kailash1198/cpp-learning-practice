#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
using namespace std;
// Modifying Algorithm
// copy function for copy the element
int main(void)
{

    // ▶️copy(first_element, last_element, first_element_from_where_copy);
    // When we copy the elemenet one vector/array to another so you have to define size of the vector/array.

    /*
        vector<int> list_one = {1, 2, 3};
        vector<int> list_two(3);
        vector<int>::iterator iter_two;

        copy(list_one.begin(), list_one.end(), list_two.begin());

        for (iter_two = list_two.begin(); iter_two != list_two.end(); iter_two++)
        {
            cout << *iter_two << endl;
        }
    */

    // ▶️fill(first_element, last_element, value);
    // fill is use for assign the value of the element and size define is cumpulsury

    /*
        vector<int> listOne(10);
        vector<int> listTwo(3);

        fill(listOne.begin(), listOne.end(), 11);
        vector<int>::iterator it = listOne.begin();
        while (it != listOne.end())
        {
            cout << *it << endl;
            it++;
        }
    */

    // ▶️swap(container_one, container_two);
    // This is use for swap the container element to another container element each other

    /*
    vector<int> listOne = {1, 2, 3};
    vector<int> listTwo = {4, 5, 6};

    swap(listOne, listTwo);
    vector<int>::iterator a = listOne.begin();
    vector<int>::iterator b = listTwo.begin();
    while (a != listOne.end())
    {
        cout << *a << endl;
        a++;
    }
    while (b != listTwo.end())
    {
        cout << *b << endl;
        b++;
    }
    */

    // ▶️reverse(first_element, last_element);
    // Use for reverse the element from container

    /*
        vector<int> listOne = {1, 2, 3, 4, 5};
        reverse(listOne.begin(), listOne.end());

        vector<int>::iterator a = listOne.begin();
        while (a != listOne.end())
        {
            cout << *a << endl;
            a++;
        }
        */
}