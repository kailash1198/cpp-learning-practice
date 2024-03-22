#include <iostream>
#include <map>
using namespace std;

int main(void)
{
    map<string, int> myMap;
    myMap["Number"] = 10;
    myMap["Number"] = 20;
    myMap["Number"] = 30;

    map<string, int>::iterator it = myMap.begin();

    while (it != myMap.end())
    {
        cout << it->first << endl;
        cout << it->second << endl;
        it++;
    }
}