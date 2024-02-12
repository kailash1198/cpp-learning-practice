#include <iostream>
#include <string>
using namespace std;

class baseClass
{
private:
    int rollNum;
    string studentName;
    double studentMarks;

public:
    baseClass(int a, string b, double c)
    {
        rollNum = a;
        studentName = b;
        studentMarks = c;
    }

    void display()
    {
        cout << "Roll Number : " << rollNum << endl;
        cout << "Student Name : " << studentName << endl;
        cout << "Student Marks : " << studentMarks << endl;
    }
};

int main(void)
{
    baseClass student1(10, "Kailash Kumar", 12345);
    student1.display();
}