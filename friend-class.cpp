#include <iostream>
using namespace std;

class myClass
{
private:
    int privateData;

public:
    myClass()
    {
        privateData = 200;
    }
    friend class friendClass;
};

class friendClass
{
public:
    int accessPrivateData(myClass &obj)
    {
        // cout<<"PrivateData value access "<<obj.privateData<<endl; //this is also correct
        int newPrivateDataVar = obj.privateData; // store private value in new variables
        return newPrivateDataVar;
    };
};

int main(void)
{
    myClass obj1;
    friendClass friendObj;

    cout << friendObj.accessPrivateData(obj1);
}