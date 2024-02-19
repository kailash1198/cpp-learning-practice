#include <iostream>
using namespace std;

class company
{
private:
    int idNum;
    int code;

public:
    company(){

    };
    company(int a, int b)
    {
        idNum = a;
        code = b;
    }
    void punchIn()
    {
        cout << "Your ID Number : ";
        cin >> idNum;
        cout << "Your Code : ";
        cin >> code;
    }

    int getIdNum()
    {
        return idNum;
    }
    int getCode()
    {
        return code;
    }
};

class productionDepartment : virtual public company
{
private:
    string employeeName;
    double mobileNum;

public:
    productionDepartment(){

    };

    productionDepartment(string a, double b)
    {
        employeeName = a;
        mobileNum = b;
    }
    void productionDetails()
    {
        cout << "Your Name: ";
        cin >> employeeName;
        cout << "Your Mobile Number: ";
        cin >> mobileNum;
    }

    string employeeNameFunc()
    {
        return employeeName;
    }

    double MobileNum()
    {
        return mobileNum;
    }
};

class hrDepartment : virtual public company, public productionDepartment
{
private:
public:
};

int main(void)
{
    int option;
    productionDepartment userOne;
    hrDepartment userTwo;

    cout << "What do u want : " << endl;
    cout << "1. Production Department" << endl
         << "2. HR Department" << endl
         << endl;
    cout << "Enter your option : ";
    cin >> option;

    if (option == 1)
    {
        userOne.punchIn();
        if (userOne.getIdNum() == 1)
        {
            if (userOne.getCode() == 123)
            {
                cout << "Log In Success" << endl;
                userOne.productionDetails();
                if (userOne.employeeNameFunc() == "Kailash")
                {
                    if (userOne.MobileNum() == 7992388076)
                    {
                        system("cls");
                        cout << "Punch In Sucess and your data Saved" << endl;
                    }
                }
            }
        }
    }
    else if (option == 2)
    {
        userTwo.punchIn();
        if (userTwo.getIdNum() == 2)
        {
            if (userTwo.getCode() == 456)
            {
                cout << "Log in Sucess" << endl;
                userTwo.productionDetails();
                if (userTwo.employeeNameFunc() == "Aryan")
                {
                    if (userTwo.MobileNum() == 123456789)
                    {
                        system("cls");
                        cout << "Punch In Sucess and your data Saved" << endl;
                    }
                }
            }
        }
    }
}