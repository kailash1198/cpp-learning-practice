#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    // int data type to float data type
    int serialNum = 1;
    float newType = (float)serialNum;
    cout << sizeof(serialNum) << endl;
    cout << sizeof(newType) << endl;

    // double type to boolean types
    double doubleNum = 100.19;
    bool newBoolType = (bool)doubleNum;
    cout << sizeof(doubleNum) << endl;
    cout << sizeof(newBoolType) << endl;

    // string type to interger types
    string userName = "12345";
    // int newIntType = (int)userName; //you get error because directly you cannot convert string to int
    // but function here for convert string to inte types std::stoi();

    int newintType = std::stoi(userName);
    cout << sizeof(userName) << endl;
    cout << sizeof(newintType) << endl;

    // int to string data type
    int num = 10;
    string newStrType = to_string(num);
    cout << sizeof(num) << endl;
    cout << sizeof(newStrType) << endl;
}