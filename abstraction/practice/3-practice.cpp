#include <iostream>
#include <iterator>
#include <string>
#include <vector>
using namespace std;

class myClass
{
private:
    vector<string> userList;

public:
    void inputUser(string name)
    {
        userList.push_back(name);
    }

    void displayList()
    {
        vector<string>::iterator it = userList.begin();
        while (it != userList.end())
        {
            cout << *it << endl;
            it++;
        }
    }

    void removeName(string name)
    {
        vector<string>::iterator it = userList.begin();
        for (it; it < userList.end(); it++)
        {
            if (*it == name)
            {
                userList.erase(it);
            }else{
                cout<<"Name not found"<<endl;
            }
        }
    }
};

int main()
{
    myClass listOne;
    listOne.inputUser("Kailash");
    listOne.inputUser("aryan");
    listOne.inputUser("shyam");
    listOne.inputUser("ghanshyam");
    listOne.inputUser("sanjay");
    listOne.inputUser("kundan");

    listOne.removeName("Kailash");
    listOne.displayList();

    return 0;
}