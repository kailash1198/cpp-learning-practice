#include <array>
#include <iostream>
#include <list>
#include <vector>
using namespace std;
// STUDENT MANAGEMENT SYSTEM
// Manage student in school
// feature - adding student, removing student, displaying student information

// Student Details
class student
{
private:
    string student_name;
    int student_class;
    int student_code;

public:
    // adding student
    void addingStudent(string stu_name, int stu_class, int stu_code)
    {
        student_name = stu_name;
        student_class = stu_class;
        student_code = stu_code;
    }

    // display student details
    void displayInformation()
    {
        cout << "Name : " << student_name << endl;
        cout << "Class : " << student_class << endl;
        cout << "Code : " << student_code << endl
             << endl
             << endl;
    }
};

int main(void)
{
    student first;
    first.addingStudent("Kailash", 10, 1);
    first.addingStudent("Kailash", 10, 1);

    first.displayInformation();


}