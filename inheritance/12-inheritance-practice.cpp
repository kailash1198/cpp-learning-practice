#include <iostream>
using namespace std;

//type casting in inheritance - base pointer to child and child pointer to base pointer is called type casting inheritance.

class mainClass
{
public:
    void mainFunc()
    {
        cout << "This is main function inside main classes" << endl;
    }
};

class classOne : public mainClass
{
public:
    void classOneFunc()
    {
        cout << "This is class one function in class one" << endl;
    }
};

int main(void)
{ 
  mainClass *mainObjPtr = new mainClass;
  mainClass *childPtr = new classOne;

  mainClass *ptrOne = (classOne*)childPtr;
  classOne *ptrTwo = (classOne*)mainObjPtr;


}   