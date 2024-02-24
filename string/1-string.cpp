#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    // string myName = "Kailash Kumar";
    // int length = myName.length();
    // cout << "Length : " << myName.length() << endl;
    // cout << "First letter is : " << myName[0] << endl;
    // cout << "Last letter is : " << myName[length - 1] << endl;

    // letter checking code k and r there or not
    char firstLetter = 'k';
    char lastLetter = 'r';
    string userName;
    int length;
    cout << "Please enter name here : ";
    cin >> userName;
    length = userName.length();

    if (userName[0] == firstLetter && userName[length - 1] == lastLetter)
    {
        cout << "You are Kailash Kumar" << endl;
    }
    else
    {
        cout << "Please enter valid name" << endl;
    }
}