#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Student {
private:
    string name;
    int age;
    string grade;

public:
    // Constructor
    Student(string name, int age, string grade) : name(name), age(age), grade(grade) {}

    // Getters
    string getName() const { return name; }
    int getAge() const { return age; }
    string getGrade() const { return grade; }

    // Display student information
    void displayInfo() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Grade: " << grade << endl;
    }
};

class School {
private:
    vector<Student> students;

public:
    // Add a student to the school
    void addStudent(const Student& student) {
        students.push_back(student);
    }

    // Remove a student from the school by name
    void removeStudent(const string& name) {
        for (auto it = students.begin(); it != students.end(); ++it) {
            if (it->getName() == name) {
                students.erase(it);
                cout << "Student " << name << " removed from the school." << endl;
                return;
            }
        }
        cout << "Student with name " << name << " not found in the school." << endl;
    }

    // Display information of all students in the school
    void displayAllStudents() const {
        cout << "Students in the school:" << endl;
        for (const auto& student : students) {
            student.displayInfo();
            cout << endl;
        }
    }
};

int main() {
    School school;

    // Adding students
    school.addStudent(Student("Alice", 15, "Grade 10"));
    school.addStudent(Student("Bob", 16, "Grade 11"));
    school.addStudent(Student("Charlie", 14, "Grade 9"));

    // Displaying all students
    school.displayAllStudents();

    // Removing a student
    school.removeStudent("Bob");

    // Displaying all students after removal
    school.displayAllStudents();

    return 0;
}
