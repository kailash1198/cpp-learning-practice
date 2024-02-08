#include <iostream>
#include <string>
using namespace std;

class myClass
{
private:
    int privateNumOne;
    int privateNumTwo;

public:
    int sumOfPrivateNum;
    // construction declare
    myClass(void);
    void printPrivateData(){
        cout<<"The data is "<<privateNumOne<<" "<<privateNumTwo<<endl;
    };
};

// construction definition
myClass::myClass(void)
{
    privateNumOne = 0;
    privateNumTwo = 0;
}


int main(void)
{
    myClass objectOne, objectTwo, ObjectThree;
    objectOne.printPrivateData();
}