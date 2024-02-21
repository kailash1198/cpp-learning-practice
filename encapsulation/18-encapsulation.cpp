/* - Design a class **`Course`** with private member variables for course name, course code, and enrolled students' grades (use a suitable container for grades).
- Implement public member functions to add grades, calculate the average grade, and find the highest and lowest grades in the course.*/

#include <iostream>
using namespace std;

class course
{
private:
    string courseName;
    int courseCode;
    string studentName;
    // string grades;
    class grade
    {
    private:
        int assignmentOnePoint;
        int assignmentTwoPoint;
        int assignmentThreePoint;
        int assignmentFourPoint;
        int assignmentFivePoint;
        int finalTestPoint;

    public:
        grade()
        {
            assignmentOnePoint = 0;
            assignmentTwoPoint = 0;
            assignmentThreePoint = 0;
            assignmentFourPoint = 0;
            assignmentFivePoint = 0;
            finalTestPoint = 0;
        }
    };

public:
    void addGrades(){
        cout<<"Enter grade point of assinment-1 : "
        
    };
};

int main(void)
{
}