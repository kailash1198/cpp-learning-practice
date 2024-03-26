#include <iostream>
using namespace std;
// Friend Function

class baseClass
{
private:
    string firstName;
    string lastName;

public:
    baseClass(string a, string b)
    {
        firstName = a;
        lastName = b;
    }
    friend void frdFunction(baseClass &obj);
};

void frdFunction(baseClass &obj)
{
    string start_name = obj.firstName;
    string end_name = obj.lastName;
    cout << start_name << endl;
    cout << end_name << endl;
}
int main(void)
{
    baseClass one("Aryan", "Singh");

    frdFunction(one);
}