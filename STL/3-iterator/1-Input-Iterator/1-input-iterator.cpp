#include <iostream>
#include <iterator>
#include <vector>
using namespace std;
// Input Iterator - This is only for value reading using * operator with loops
int main(void)
{
    vector<int> dataList = {1, 2, 3, 4, 5};
    vector<int>::iterator i = dataList.begin();

    while (i != dataList.end())
    {
        cout << *i << endl;
        i++;
    }

    vector<float> subjectMarks = {10.25, 30.12, 40.34, 50.28};
    vector<float>::iterator it=subjectMarks.begin();

    while (it!=subjectMarks.end())
    {
        cout<<*it<<endl;
        it++;
    }


}
