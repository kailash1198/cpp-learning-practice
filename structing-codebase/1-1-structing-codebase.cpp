#include <iostream>
#include <string>
using namespace std;
// namespace tool practice
namespace student
{
    class studentInformation
    {
    private:
        string studentName;
        string parentName;
        string studentAddress;
        int studentCode;
        int studentClass;
        int studentRollNumber;

    public:
        studentInformation(){};
        studentInformation(string a, string b, string c, int x, int y, int z)
        {
            studentName = a;
            parentName = b;
            studentAddress = c;
            studentCode = x;
            studentClass = y;
            studentRollNumber = z;
        }

        void inputStuInformation()
        {
            cout << "Please enter your details : " << endl;
            cout << "Full Name : ";
            getline(cin, studentName);
            cout << "Parent Name : ";
            getline(cin, parentName);
            cout << "Student Address :";
            getline(cin, studentAddress);
            cout << "Student Code : ";
            cin >> studentCode;
            cout << "STudent Class : ";
            cin >> studentClass;
            cout << "STudent Roll Number : ";
            cin >> studentRollNumber;
        }

        void displayStudentDetails()
        {
            cout << "Full Name : " << studentName;
            cout << "Parent Name : " << parentName;
            cout << "Student Address : " << studentAddress;
            cout << "Student Code : " << studentCode;
            cout << "STudent Class : " << studentClass;
            cout << "STudent Roll Number : " << studentRollNumber;
        }
    };
}

namespace custumer
{
    struct custumerData
    {
        string custumerName;
        string accountType;
        long int accountNumber;
        string ifscCode;
        int accountPassword;
    };

}

int main(void)
{
    // namespace for studentGroup
    using student::studentInformation;
    studentInformation studentOne;
    studentOne.inputStuInformation();
    studentOne.displayStudentDetails();

    // namespace for custumer group section
    struct custumer::custumerData custumerDetails; // create object for structure custumer in above code
}