#include <iostream>
using namespace std;
// base class - account
class account
{
private:
    long int account_number;
    double balance;
};

// derived class - saving account
class savingAccount : public account
{

public:
    int interestCalculation(double principal_amount, int rate, int duration)
    {
        int interest = (rate * duration) / 100;
        return interest;
    }
};
// derived class - checking account
class checkingAccount : public account
{

public:
    double transactionLimit(double balance)
    {
        if (balance > 10000)
        {
            cout << "Limit" << endl;
        }
        else
        {
            return;
        }
    }
};

int main(void)
{
}