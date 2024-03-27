#include <iostream>
using namespace std;
#include <string>

// delegation of constructor : constructors can call other constructors in the same class using a feature called "delegating constructors".

class classOne
{
private:
    int one;
    int two;
    string userName;
    string admin;

public:
    classOne() : classOne(" ", " "){}; // THis constructor delegate to below constructor and in this constructor the string value pass as parameter becuase i want string data in delegated constructor in below
    classOne(string a, string b) : userName(a), admin(b){};
};

int main(void)
{
}