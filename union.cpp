#include <iostream>
#include <string>
// #include <string.h>
using namespace std;

// union studentData
// {
//     /* data */
//     // string stuName;//instead define like char stuName[100]; (char string array)
//     int stuRoll;
//     int stuCode;
// };

// union temConvert
// {
//     /* data */
//     float celcious;
//     float farenheight;
// };

// int cToF(int c)
// {
//     int f = c * 9 / 5 + 32;
//     return f;
// }
// int fToC(int d)
// {
//     int c = (d - 32) * 5 / 9;
//     return c;
// }

int main()
{

    // union studentData stuSetails;
    // stuSetails.stuCode = 100;
    // cout<<stuSetails.stuCode<<endl;

    // int option;

    // union temConvert var;
    // cout << "Please enter your input: \n\n1. Celcious to Farenheight\n2. Farenheight to celcious\n\nYour Input: ";
    // cin >> option;
    // if (option == 1)
    // {
    //     cout << "Celcious to Farenheight" << endl;
    //     cout << endl;
    //     cout << "Your Celcious : ";
    //     cin >> var.celcious;
    //     int result = cToF(var.celcious);
    //     cout << result << endl;
    // }
    // else if (option == 2)
    // {
    //     cout << "Farenheight to Celcious" << endl;
    //     cout << endl;
    //     cout << "Your Farenheight : ";
    //     cin >> var.farenheight;
    //     int result = fToC(var.farenheight);
    //     cout << result << endl;
    // }
    // else
    // {
    //     cout << "Please enter correct input" << endl;
    // }

    // union myData{
    //     int numOne;
    //     int numTwo;
    // };
    // union myData varOne;

    // varOne.numOne = 100;
    // cout<<varOne.numOne<<endl;

    union userData
    {
        int userID;
        int userCode;
        union bankData
        {
            int acNum;
            int accCode;
            union moneyDetails
            {
                int money;
                int moneyCode;
            } paisa;
        } infoBank;
    };
    union userData varOne;
    varOne.infoBank.accCode = 12345;

    cout << varOne.infoBank.accCode << endl;
    varOne.infoBank.paisa.money = 12000;
    cout << varOne.infoBank.paisa.money << endl;

    return 0;
}