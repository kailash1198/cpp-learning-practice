#include <iostream>
#include <string>
using namespace std;
// main class

class mainClass
{
private:
    int numOne;
    int numTwo;

public:
    void totalNum(int a, int b)
    {
        numOne = a;
        numTwo = b;
        int totalNum = numOne + numTwo;
        cout << "Total num = " << totalNum << endl;
    };
};

// derived class
class secondClass : public mainClass
{
private:
    int userOneCode;
    int userTwoCode;

public:
    void inputUserCode(int code1, int code2)
    {
        userOneCode = code1;
        userTwoCode = code2;
        cout << "Please enter user-1 code: ";
        cin >> userOneCode;
        cout << "Please enter user-2 code: ";
        cin >> userTwoCode;
    }

    void displayUserCode()
    {
        cout << "The user-1 code is " << userOneCode << endl;
        cout << "The user-2 code is " << userTwoCode << endl;
    }
};
int main(void)
{
    mainClass *mainClassPointer; // mainclass pointer object This pointer point to main class objects
    mainClass mainObj1;
    secondClass *derivedClassPointer; // derived class pointer object
    secondClass derivedObj1;

    mainClassPointer = &derivedObj1; // pointing main class to derived class
    derivedClassPointer->inputUserCode(100, 200);
    derivedClassPointer->displayUserCode();
    derivedClassPointer->totalNum(10, 20);

    derivedClassPointer = &derivedObj1;
    derivedClassPointer->inputUserCode(1,2);
    derivedClassPointer->displayUserCode();
}