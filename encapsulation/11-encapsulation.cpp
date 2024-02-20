#include <iostream>
using namespace std;

// Design a class called Employee with private member variables for employee name, employee ID, and monthly salary. Implement public member functions to set and get these attributes, calculate the annual salary (assuming 12 months in a year), and give a raise to the employee by a certain percentage.

class Employees
{
private:
    string employeeName;
    int employeeID;
    int sallery;

public:
    void setData(string a, int b, int c)
    {
        employeeName = a;
        employeeID = b;
        sallery = c;
    }

    void getData()
    {
        cout << employeeName << endl;
        cout << employeeID << endl;
        cout << sallery << endl;
    }

    int annualSallery()
    {
        int annual = 12 * sallery;
        return annual;
    }

    int salleryHike(int a, float percente)
    {
        sallery = a;
        float hike = (float)sallery * (percente / 100);
        //   int hike = sallery*percente/100;
        return hike;
    }
};

int main(void)
{
    Employees first;
    first.setData("kailash", 1, 10000);
    first.getData();

    cout << "Sallery Hike = " << first.salleryHike(10000, 10) << endl;
    cout << "Annual sallery = " << first.annualSallery() << endl;
}