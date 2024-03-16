#include <iostream>
#include <list>
#include <vector>
using namespace std;
// Iterator - Iterate is object like Pointer that point to element inside of container.
// Types of Iterator :
// 1. Input Iterator 2. Output Iterator 3. Forward Iterator  4. Bidirectional Iterator   5. Random access iterator

int main(void)
{
    vector<int> numList = {1, 2, 3, 4, 5};

    // Iterator declaration
    vector<int>::iterator i;

    // Iteration implementaion using Iterator
    for (i = numList.begin(); i != numList.end(); i++)
    {
        cout << *i << endl;
    }

    list<int> userCodeList;
    userCodeList.push_front(10);
    userCodeList.push_front(20);
    userCodeList.push_front(30);
    userCodeList.push_front(40);

    list<int>::iterator j;
    for (j = userCodeList.begin(); j != userCodeList.end(); j++)
    {
        cout << *j << endl;
    }
}