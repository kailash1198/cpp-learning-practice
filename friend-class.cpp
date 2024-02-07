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
    void accessPrivateData(myClass &obj)
    {
        cout<<"PrivateData value access "<<obj.privateData<<endl;
    };
};

int main(void)
{
    myClass obj1;
    friendClass friendObj;

    friendObj.accessPrivateData(obj1);
}