#include <iostream>
using namespace std;

class myClass
{
private:
    string userName;
    string userPassword;

public:
    myClass(string a, string b)
    {
        userName = a;
        userPassword = b;
    }

    string getUserName()
    {
        return userName;
    }

    string getPassword()
    {
        return userPassword;
    }
};

int main()
{
    myClass user("Kailash", "1119121198");

    string name = user.getUserName();
    string password = user.getPassword();

    cout << "UserName : " << name << endl;
    cout << "Password : " << password << endl;

    if(name=="Kailash"){
        cout<<"log in success"<<endl;
    }else{
        cout<<"Log in failed"<<endl;
    }
    return 0;
}