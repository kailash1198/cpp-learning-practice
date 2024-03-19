#include <iostream>
#include <vector>
using namespace std;
//Output Iterator - Use for write/assign the value to element in the container.
int main(void)
{
    vector<int> value_list = {1, 2, 3, 4, 5};
    vector<int>::iterator it = value_list.begin();
    vector<int>::iterator read_input = value_list.begin();

    vector<int>::iterator it_forRead = value_list.begin();

    while (it != value_list.end())
    {
        *it = 0;
        it++;
    }

    while (it_forRead != value_list.end())
    {
        cout << *it_forRead << endl;
        it_forRead++;
    }

    while (read_input != value_list.end())
    {
        value_list.push_back(10);
        read_input++;
    }


}