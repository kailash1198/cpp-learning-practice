#include <iostream>
using namespace std;
// Structure to enum data conversition
struct student
{
    int rollNum;
    string stuName;
    int stuCode;
};

enum userData
{
    userName,
    userCode,
    userAddress
};

struct student studentOne;

int main(void)
{
    // structure to enum
    userData userDataOne = static_cast<userData>(studentOne.rollNum);
}