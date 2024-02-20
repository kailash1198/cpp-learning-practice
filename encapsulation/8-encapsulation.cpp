#include <iostream>
using namespace std;

// Create a class representing a BankAccount with private member variables for account number, account holder name, and balance. Implement public member functions to deposit money, withdraw money, and check the account balance. Ensure that withdrawing money does not allow overdrawing (i.e., the balance cannot go below zero).

class bankAccount
{
private:
    long accountNumber;
    string accountHolderName;
    int balance;

public:
    bankAccount()
    {
        balance = 0;
    }
    void depositMoney(int money)
    {
        cout << "Enter account Number : ";
        cin >> accountNumber;
        cout << "Enter account holder name: ";
        cin >> accountHolderName;

        balance += money;
    }

    void withrawMoney(int a)
    {
        cout << "Enter account Number : ";
        cin >> accountNumber;

        if (accountNumber == accountNumber)
        {
            balance -= a;
        }
    }

    int checkBalance()
    {
        return balance;
    }
};

int main(void)
{
home:
    int option;
    bankAccount custumer;
    cout << "\t\tWelcome to our bank";
    cout << endl;
    cout << endl;
    cout << endl;

    cout << "1. Deposit Money\n2. Withraw Money\n3. Check Balance" << endl;
    cout << "Enter your option: ";
    cin >> option;

    if (option == 1)
    {
        int money;
        cout << "Enter Money : ";
        cin >> money;
        custumer.depositMoney(money);
        goto withraw;
    }
    else if (option == 2)
    {
    withraw:
        int withdraw;
        cout << "How much withrawsl : ";
        cin >> withdraw;
        custumer.withrawMoney(withdraw);
        goto check;
    }
    else if (option == 3)
    {
    check:
        cout << "Your balance : " << custumer.checkBalance() << endl;
    }
}