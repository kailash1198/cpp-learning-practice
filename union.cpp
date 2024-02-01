#include <cstring>
#include <iostream>
#include <string>
// #include <string.h>
using namespace std;
#define PI 3.14

// union dataStore
// {
//     int intVar;
//     float floatVar;
// } dataVar;

// int arithmaticOperation(int numOne)
// {
//     if (numOne % 1 == 0)
//     {
//         dataVar.intVar = numOne;
//         int sum = numOne + 10;
//         int subtraction = numOne - 10;
//         int multiply = numOne * 10;
//         int divide = numOne / 10;

//         cout << "Sum : " << sum;
//         cout << "Subtraction : " << subtraction;
//         cout << "Multiply : " << multiply;
//         cout << "Divide : " << divide;
//     }
//     else
//     {
//         dataVar.floatVar = numOne;
//         float sum = numOne + 10.10;
//         float subtraction = numOne - 10.10;
//         float multiply = numOne * 10.10;
//         float divide = numOne / 10.10;

//         cout << "SUm : " << sum;
//         cout << "Subtraction : " << subtraction;
//         cout << "Multiply : " << multiply;
//         cout << "Divide : " << divide;
//     }
//     return 0;
// }

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

// int areaOfCircle(int r)
// {
//     int A = PI * (r * r);
//     return A;
// }

// int areaOfSquare(int l)
// {
//     int A = l * l;
//     return A;
// }

// int areaOfRectangle(int l, int w)
// {
//     int A = l * w;
//     return A;
// }
// char userName[30];
// union employeeDatabase
// {
//     /* data */
//     int empId;
//     char empName[30];
//     float sallery;
// } data;

// void employeeDetailsFunc()
// {
//     cout << "\t\tEmployee Database" << endl
//          << endl;
//     cout << "Please enter Employees ID number : ";
//     cin >> data.empId;
//     cout << "Please enter Employees Name : ";
//     cin >> userName;
//     strncpy(data.empName, userName, 30);
//     cout << "Please enter Employees Sallery : ";
//     cin >> data.sallery;

//     cout << "Employee Id : " << data.empId << endl;
//     cout << "Employee Name : " << data.empName << endl;
//     cout << "Employee Sallery : " << data.sallery << endl;
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

    // union userData
    // {
    //     int userID;
    //     int userCode;
    //     union bankData
    //     {
    //         int acNum;
    //         int accCode;
    //         union moneyDetails
    //         {
    //             int money;
    //             int moneyCode;
    //         } paisa;
    //     } infoBank;
    // };
    // union userData varOne;
    // varOne.infoBank.accCode = 12345;

    // cout << varOne.infoBank.accCode << endl;
    // varOne.infoBank.paisa.money = 12000;
    // cout << varOne.infoBank.paisa.money << endl;

    // Shape Area Calculation: Design a union to represent different geometric shapes (circle, square, rectangle, etc.) and store their parameters (radius, side length, width, height, etc.). Write functions to calculate the area of each shape.
    // int option;
    // union shape
    // {
    //     union circle
    //     {
    //         int radious;
    //     } circleVar;
    //     union square
    //     {
    //         int width;
    //     } squareVar;
    //     union rectangle
    //     {
    //         int length;
    //         int width;
    //     } rectanleVar;
    // } shapeUnionVar;

    // cout << "What you want square please enter :" << endl
    //      << "1. Circle\t2. Square \t3. Rectangle" << endl;
    // cout << "Please enter your option : ";
    // cin >> option;
    // if (option == 1)
    // {
    //     cout << "Please give me Radious : ";
    //     cin >> shapeUnionVar.circleVar.radious;
    //     int circleResult = areaOfCircle(shapeUnionVar.circleVar.radious);
    //     cout << "Area of Circle = " << circleResult << endl;
    // }
    // else if (option == 2)
    // {
    //     cout << "Please give me width size of square: ";
    //     cin >> shapeUnionVar.squareVar.width;
    //     int squareResult = areaOfSquare(shapeUnionVar.squareVar.width);
    //     cout << "Area of square = " << squareResult << endl;
    // }
    // else if (option == 3)
    // {
    //     cout << "Please give length and Width of rectanle";
    //     cin >> shapeUnionVar.rectanleVar.length;
    //     cin >> shapeUnionVar.rectanleVar.width;
    //     int rectangleResult = areaOfRectangle(shapeUnionVar.rectanleVar.length, shapeUnionVar.rectanleVar.width);
    //     cout << "Area of Rectangle = " << rectangleResult << endl;
    // }
    // else
    // {
    //     cout << "Please enter correct Number";
    //     return 1;
    // }

    // Employee Database: Create a union to store employee information such as ID (integer), name (string), and salary (float). Write functions to input and display employee details.

    // employeeDetailsFunc();

    // Numeric Operations: Define a union that can hold either an integer or a floating-point number. Write functions to perform basic arithmetic operations (addition, subtraction, multiplication, division) on these numbers.
    // int integerNum = 100;
    // float floatingNum = 100.05;
    // arithmaticOperation(floatingNum);
    return 0;
}
