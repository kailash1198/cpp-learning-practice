#include <iostream>
#include <string>
using namespace std;

// class baseClass
// {
// private:
//     int numOne;
//     int numTwo;

// public:
//     baseClass()
//     {
//         numOne = 0;
//         numTwo = 0;
//     }

//     void display()
//     {
//         cout << numOne << endl;
//         cout << numTwo << endl;
//     }
// };

class student
{
    int rollNum;
    string stuName;
    int stuCode;

public:
    student()
    {
        cout << "Enter roll Number : ";
        cin >> rollNum;
        cout << "Enter Student name : ";
        cin >> stuName;
        cout << "Enter student code : ";
        cin >> stuCode;
    };

    void display(){
        cout<<"Student roll num : "<<rollNum<<endl;
        cout<<"Student Name  : "<<stuName<<endl;
        cout<<"Student Code : "<<stuCode<<endl;
    }
};
int main(void)
{
    // baseClass obj1;
    // obj1.display();

    student student1;
    student1.display();
}