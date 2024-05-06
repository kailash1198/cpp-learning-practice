#include <iostream>
#define WEEKLY 6
// Employee Payroll: ➡️
// -> Create a base class Employee with derived classes HourlyEmployee and SalariedEmployee.
// -> Each type of employee should have a method to calculate their weekly pay.
// -> Use polymorphism to process a list of Employee objects, calling the appropriate method for each.

// base class - Employee
class Employee
{

public:
    virtual void weeklyPay()
    {
    }
};

// derived class - HourlyEmployee
class HourlyEmployee : public Employee
{
private:
    double emp_perDay_pay;

public:
    HourlyEmployee(double a)
    {
        emp_perDay_pay = a;
    }

    void weeklyPay()
    {
        double totalPay = WEEKLY * emp_perDay_pay;
        std::cout << "Hourly - Weekly pay = " << totalPay << std::endl;
    }
};

// derived class - SalariedEmployee
class SalariedEmployee : public Employee
{
private:
    double monthlySallery;

public:
    SalariedEmployee(double a)
    {
        monthlySallery = a;
    }
    void weeklyPay()
    {
        double totalPay = WEEKLY * (monthlySallery / 30);
        std::cout << "Salleried - Weekly pay = " << totalPay << std::endl;
    }
};

int main()
{
    Employee *one;
    HourlyEmployee H_one(100);
    SalariedEmployee S_one(10000);

    one = &H_one;
    one->weeklyPay();

    one = &S_one;
    one->weeklyPay();

    return 0;
}