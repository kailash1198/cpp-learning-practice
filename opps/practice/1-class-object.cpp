#include <iostream>
#include <string>
using namespace std;

// class class_one
// {
// private:
//     int private_one;
//     int private_two;

// protected:
//     int protected_one;
//     int protected_two;

// public:
//     int public_one;
//     int public_two;
// };

// int funcOne(int a)
// {
//     return a;
// }

class bank_account
{
public:
    int account_number;
    string holder_name;
    double balance;

    bank_account()
    {
        balance = 0;
    }

    double deposit(double money)
    {
        balance += money;
        return balance;
    }

    double withraw(double money)
    {
        balance -= money;
        return balance;
    }

    void accountDetailsDisplay()
    {
        cout << "Account Holder Name : " << holder_name << endl;
        cout << "Account Number : " << account_number << endl;
        cout << "Current Balance : " << balance << endl;
    }
};

int main(void)
{
    // class_one objOne, objTwo, objThree;
    // objOne.public_one = funcOne(100);
    // objOne.public_two = 20;
    // cout << objOne.public_one << endl;
    // cout << objOne.public_two << endl;

    int option;
    bank_account accountOne;
    cout << "Enter your Name : ";
    getline(cin, accountOne.holder_name);
    cout << "Account Number : ";
    cin >> accountOne.account_number;
homePage:
    cout << "What you want : " << endl;
    cout << "1. Deposit" << endl;
    cout << "2. Withraw" << endl;
    cout << "3. Account Details" << endl;

    cout << "Enter your option : ";
    cin >> option;
    if (option == 1)
    {
        system("cls");
        double amount;
        cout << "Enter Amount : ";
        cin >> amount;
        accountOne.deposit(amount);
        goto homePage;
    }
    else if (option == 2)
    {
        system("cls");
        double money;
        cout << "Enter Amount : ";
        cin >> money;
        accountOne.withraw(money);
        goto homePage;
    }
    else if (option == 3)
    {
        system("cls");
        accountOne.accountDetailsDisplay();
    }
}