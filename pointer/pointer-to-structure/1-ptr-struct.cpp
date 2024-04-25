#include <iostream>
using namespace std;

struct studentData
{
    string firstName;
    string lastName;
    int className;
};

int main()
{
    studentData data_one;
    // data_one.firstName = "Kailash";
    // data_one.lastName = "Kumar";
    // data_one.className = 10;

    // cout << data_one.firstName << endl;
    // cout << data_one.lastName << endl;
    // cout << data_one.className << endl;

    studentData *structAddress = &data_one;
    structAddress->firstName = "Aryan";
    cout<<structAddress->firstName<<endl;
    return 0;
}