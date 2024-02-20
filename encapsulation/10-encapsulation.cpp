#include <iostream>
using namespace std;

// Create a class representing a Student with private member variables for student name, roll number, and marks in three subjects. Implement public member functions to set and get these attributes, calculate the average marks, and display the student details.

class student
{
private:
    string studentName;
    int rollNum;
    int marksSubOne;
    int marksSubTwo;
    int marksSubThree;

public:
    void setDetails(string a, int b, int c, int d, int e)
    {
        studentName = a;
        rollNum = b;
        marksSubOne = c;
        marksSubTwo = d;
        marksSubThree = e;
    }

    void displayDetails(){
        cout<<studentName<<endl;
        cout<<rollNum<<endl;
        cout<<marksSubOne<<endl;
        cout<<marksSubTwo<<endl;
        cout<<marksSubThree<<endl;
    }

    int averageMarks()
    {
        int average = (marksSubOne + marksSubTwo + marksSubThree) / 3;
        return average;
    }
};

int main(void)
{
    student studentOne;
    studentOne.setDetails("kailash", 10, 100, 100, 100);
    cout<<"Average = "<<studentOne.averageMarks();
    studentOne.displayDetails();
}