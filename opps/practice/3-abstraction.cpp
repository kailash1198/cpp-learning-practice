#include <iostream>
using namespace std;

// class one
// {
// private:
//     int numOne;
//     int numTwo;

// public:
//     one()
//     {
//         numOne = 0;
//         numTwo = 0;
//     }

//     int funcOne()
//     {
//         return numOne;
//     }

//     int funcTwo()
//     {
//         return numTwo;
//     }
// };

// class two
// {
// };

// class company
// {
// private:
//     string companyName;
//     string companyType;

// public:
//     company()
//     {
//     }
//     company(string a, string b)
//     {
//         companyName = a;
//         companyType = b;
//     }
// };

// class finance : public company
// {
// private:
//     int accountNum;
//     int balance;
//     finance()
//     {
//         balance = 0;
//     }

// public:
//     void accountDetails(int money)
//     {
//         balance += money;
//     }

//     int moneyReport()
//     {
//         return balance;
//     }
// };

// ▶️  Build a library management system where users can borrow and return books. Implement classes for books, users, and the library. Use abstraction to encapsulate the book borrowing and returning process.
class user
{
private:
    string userName;
    int userPassword;
    public:
    void logIn(string a, int b){
        userName=a;
        userPassword=b;
    }
};

class library:public user
{
private:
    string title;
    string author;
    int code;

public:
    library(string a, string b, int c)
    {
        title = a;
        author = b;
        code = c;
    }

    void getBooks(int bookCode)
    {
        if (bookCode == code)
        {


        }
    }
};

int main(void)
{
    library bookOne("Art of Speaking", "Aryan", 1);
    bookOne.getBooks(1);
}