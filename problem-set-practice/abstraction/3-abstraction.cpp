#include <iostream>
using namespace std;
// Build a student grading system where teachers can input grades for assignments and exams.
// Implement classes for students, courses, and grades.
// Use abstraction to calculate the overall grade for each student.

class student
{
private:
    string student_name;
    string student_stream;
    int student_code;

public:
    void addStudent(string a, string b, int c)
    {
        student_name = a;
        student_stream = b;
        student_code = c;
    }

    int getStudentCode()
    {
        return student_code;
    }
};

class courses
{
private:
    string subject_one;
    string subject_two;
    string subject_three;
    string subject_four;
    string subject_five;

public:
    courses()
    {
        subject_one = "math";
        subject_two = "physics";
        subject_three = "chemistry";
        subject_four = "hindi";
        subject_five = "history";
    }
};

class grades
{
private:
    int subOne;
    int subtwo;
    int subThree;
    int subFour;
    int subFive;

public:
    void giveGrade(int a, int b, int c, int d, int e)
    {
        subOne = a;
        subtwo = b;
        subThree = c;
        subFour = d;
        subFive = e;
    }

    int calculateGrade()
    {
        int totalGrade = subOne + subtwo + subThree + subFour + subFive;
        return totalGrade;
    }
};

int main()
{
    student studentOne;
    studentOne.addStudent("Kailash", "programming", 1);

    if (studentOne.getStudentCode() == 1)
    {
        grades gradeObj;
        gradeObj.giveGrade(1, 1, 1, 1, 1);
        int total = gradeObj.calculateGrade();
        cout << "Total Grade : " << total << endl;
    }

    return 0;
}