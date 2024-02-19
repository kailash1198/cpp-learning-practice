#include <iostream>
using namespace std;

class facebook
{
private:
    string userName;
    int userPassword;

public:
    void setUserName(string name)
    {
        userName = name;
    }

    void setPassword(int password)
    {
        userPassword = password;
    }

    string getUserName()
    {
        return userName;
    }

    int getUserPassword()
    {
        return userPassword;
    }
};

int main(void)
{
    string name;
    int pass;
    facebook userOne;

    cout<<"Enter userName: ";
    cin>>name;
    cout<<"Enter password: ";
    cin>>pass;

    userOne.setUserName(name);
    userOne.setPassword(pass);

    cout<<"Your user Name : "<<userOne.getUserName()<<endl;
    cout<<"Your user Password : "<<userOne.getUserPassword();
}