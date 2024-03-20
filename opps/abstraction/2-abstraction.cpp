#include <iostream>
using namespace std;
// Design a payroll system for a company that involves different types of employees (e.g., full-time, part-time, contractors). Use abstraction to handle the payment calculation differently for each type of employee.
class fullTime
{
private:
    double basic_sallery;
    double bonus;
    double extra_allowance;

public:
    fullTime()
    {
        basic_sallery = 10000;
        bonus = 2000;
        extra_allowance = 3000;
    }

    double netSallery(int present)
    {
        double total_sallery;
        double per_day = basic_sallery / 30;
        double net_payment = per_day * present;
        if (present < 10)
        {
            total_sallery = net_payment;
        }
        else
        {
            total_sallery = net_payment + bonus + extra_allowance;
        }

        return total_sallery;
    }
};

class partTime
{
private:
    double basic_sallery;
    double bonus;
    double extra_allowlance;

public:
    partTime()
    {
        basic_sallery = 8000;
        bonus = 1000;
        extra_allowlance = 500;
    }
    double net_sallery(int present)
    {
        double per_day = basic_sallery / 30;
        double net_sallery;
        if (present < 10)
        {
            net_sallery = present * per_day;
        }
        else
        {
            net_sallery = (present * per_day) + bonus + extra_allowlance;
        }

        return net_sallery;
    }
};

int main(void)
{
    int present;
    // fullTime kailash;
    // cout << "Please enter present Day Duty : ";
    // cin >> present;
    // double net_sallery = kailash.netSallery(present);
    // cout << "Kailash (Net Sallery ) = " << net_sallery << endl;

    partTime aryan;
    cout << "Please enter present Day Duty : ";
    cin >> present;

    double net_sallery = aryan.net_sallery(present);
    cout << "Aryan (Net Sallery ) = " << net_sallery << endl;
}