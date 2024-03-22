// Design a class representing a bank account.
// Implement constructors to initialize the account with an initial balance and destructor to handle account closure.

#include <iostream>
using namespace std;
class bank_account
{
public:
    double current_balance;

    bank_account()
    {
        current_balance = 0;
        cout << "Current Balance = " << current_balance << endl;
    }

    void depositMoney(double money)
    {
        current_balance += money;
    }

    void withrawMoney(double amount)
    {
        current_balance -= amount;
    }

    ~bank_account()
    {
        // cout << "Account balance now = 0" << endl;
    }
};

#include <iostream>
using namespace std;

int main(void)
{
    bank_account accountOne;

    bank_account accountTwo;
    double nowBalance = accountTwo.current_balance;
    cout << nowBalance << endl;
}