#include <iostream>
#include <istream>
#include <string>
using namespace std;
// program for different way for take input from user in string data types
int main(void)
{
    // ▶️cin - space and new line not read by this method function
    // string userName;
    // cout << "Please enter your name: ";
    // cin >> userName;

    // cout << userName << endl;

    // ▶️getline - run till new line
    // string yourAddress;
    // cout << "Your address : ";
    // getline(cin, yourAddress);

    // cout << yourAddress << endl;

    // ▶️cin.get() - header file is <istream> and till new line
    // char yourAddress[100];
    // cout << "Your address : ";

    // cin.get(yourAddress, sizeof(yourAddress));
    // string address = yourAddress;

    // cout << yourAddress << endl;

    // ▶️skip new line termination
    string para;
    getline(cin, para);
    cout << "Your input: " << para << endl;
}