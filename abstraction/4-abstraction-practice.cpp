#include <iostream>
using namespace std;
// Implement a simple bank account management system using classes. The system should allow users to create an account, deposit money, withdraw money, and check their balance. Use abstraction to hide the implementation details of the account.

class accountCreation
{
private:
    string firstName;
    string lastName;
    string dateOfBirth;
    string permanantAddress;
    long long int mobileNumber;
    int pinCode;
    long accountNumber;
    int accountCode;
    string accountPassword;

public:
    accountCreation()
    {
        accountNumber = 123456789;
        accountCode = 1;
    }

    void createAnAccount()
    {
        cout << "First Name : ";
        cin >> firstName;
        cout << "Last Name : ";
        cin >> lastName;
        cout << "Date of Birth : ";
        cin >> dateOfBirth;
        cout << "Permanant Address : ";
        cin >> permanantAddress;
        cout << "Mobile Number : ";
        cin >> mobileNumber;
        cout << "Pin Code : ";
        cin >> pinCode;
        cout << "Password : ";
        cin >> accountPassword;
    }
};

class deposit : virtual public accountCreation
{
protected:
    int balance;

public:
    deposit()
    {
        balance = 0;
    }

    void depositMoney(int money)
    {
        balance += money;
    }
};

class withraw : virtual public accountCreation, virtual public deposit
{
public:
    void withrawMoney(int money)
    {
        balance -= money;
    }
};

class checkAccount : virtual public accountCreation, virtual public deposit, virtual public withraw
{
public:
    int balanceCheck()
    {
        int currentBalance = balance;
        return currentBalance;
    }
};

int main(void)
{
    // accountCreation accountOne;
    // accountOne.createAnAccount();

    checkAccount account;
    account.depositMoney(10000);
    account.withrawMoney(2000);
    cout<<"The balance: "<<account.balanceCheck()<<endl;
}