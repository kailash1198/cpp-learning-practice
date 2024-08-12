#include <iostream>
using namespace std;

// class baseClass
// {
// public:
//     baseClass()
//     {
//         cout << "Base class automatically invoked" << endl;
//     }
// };

class studentData
{
public:
    string first_name;
    string last_name;
};

class teacherData : public studentData
{
public:
    void displayData()
    {
        cout << first_name << endl;
        cout << last_name << endl;
    }
};

int main()
{
    studentData studentOne;
    string first_name = studentOne.first_name = "Kailash";
    string last_name = studentOne.last_name = "kumar";

    cout << first_name << " " << last_name << endl;

    teacherData teacherOne;
    teacherOne.first_name="Aryan";
    teacherOne.last_name="Singh";

    teacherOne.displayData();

    return 0;
}