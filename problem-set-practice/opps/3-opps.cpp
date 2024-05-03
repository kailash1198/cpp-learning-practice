#include <iostream>
#include <string>
// Bank Account Management System:
// Create a class representing a bank account with features like :
// deposit
// withdrawal
// balance inquiry

class bank_Account
{
private:
    double amount;
    long int accountNum;

public:
    bank_Account()
    {
        amount = 0;
    }
    void deposit(double money)
    {
        amount += money;
    }

    void withdrawal(double money)
    {
        if (money <= amount)
        {
            amount -= money;
        }
        else
        {
            exit(0);
        }
    }

    double balance_check()
    {
        return amount;
    }
};

int main()
{
    bank_Account accountOne;
    accountOne.deposit(1000);
    accountOne.withdrawal(200);

    double currentBalance = accountOne.balance_check();
    std::cout<<currentBalance<<std::endl;
    return 0;
}