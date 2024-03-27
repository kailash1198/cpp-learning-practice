#include <iostream>
#include <iterator>
#include <map>

using namespace std;

int main(void)
{
    map<string, int> dataList;
    // insertion
    dataList["Kailash"] = 1;
    dataList.insert({"Aryan", 2});

    map<string, int>::iterator it = dataList.begin();
    while (it != dataList.end())
    {
        cout << it->first << endl;
        cout << it->second << endl;
        it++;
    }

    // deletion
    dataList.erase("Kailash");

    // lookup/find

    string searchKey = "Aryan";
    auto i = dataList.find(searchKey);

    if (i != dataList.end())
    {
        cout << "Found" << i->first << endl;
    }
}