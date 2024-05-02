#include <iostream>
using namespace std;

class mainClass
{
public:
    virtual void funcOne()
    {
        cout << "This is function one-1" << endl;
    }
};

class secondClass : public mainClass
{
public:
    void funcOne()
    {
        cout << "This is function one-2" << endl;
    }
};

struct studentData
{
    virtual void funcOne()
    {
        cout << "This is function one-1" << endl;
    }
};

struct teacherData : public studentData
{
    void funcOne()
    {
        cout << "This is function one-2" << endl;
    }
};

int main()
{

    // class - virtual function
    mainClass mainObjOne;
    mainClass *mainPtr;
    secondClass secondObj;

    mainObjOne.funcOne();
    secondObj.funcOne();

    mainPtr = &secondObj;
    mainPtr->funcOne();

    cout << "---------------------" << endl;
    
    // structure - virtual function
    studentData StudataOne;
    studentData *StudataPtr;
    teacherData teachDataOne;

    StudataOne.funcOne();
    teachDataOne.funcOne();

    StudataPtr = &teachDataOne;
    StudataPtr->funcOne();
    return 0;
}