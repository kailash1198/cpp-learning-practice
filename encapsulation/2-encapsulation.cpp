#include <iostream>
using namespace std;

class baseClass
{
private:
    string userName;
    int userAge;

public:
    baseClass(string name, int age)
    {
        userName = name;
        userAge = age;

        // this->userName;
        // this->userAge;
    }

    void setName(string name)
    {
        name = userName;
    }

    void setAget(int n)
    {
        n = userAge;
    }

    string getName()
    {
        return userName;
    }

    int getAge()
    {
        return userAge;
    }
};

int main(void)
{
    baseClass obj("Kailash Kumar", 25);
    cout<<obj.getName();
    cout<<obj.getAge();
}