#include <iostream>
using namespace std;
// Base class - employee
class employee
{
private:
    string name;
    int ID;

public:
    void setData(string a, int b)
    {
        name = a;
        ID = b;
    }
};

// Derived class - full time employee
class fullTime_employee : public employee
{
private:
    double salary;

public:
    void setSallery(double a)
    {
        salary = a;
    }
};

// derived class - part time employee
class partTime_employee : public employee
{
private:
    double salary;

public:
    void setSallery(double a)
    {
        salary = a;
    }
};

int main(void)
{
    // employee employeeData;
    fullTime_employee fullTimeEmployee;
    partTime_employee partTimeEmployee;

    fullTimeEmployee.setData("Aryan singh", 1);
    partTimeEmployee.setData("Kailash Kumar", 2);

    fullTimeEmployee.setSallery(9000);
    partTimeEmployee.setSallery(12000);
}