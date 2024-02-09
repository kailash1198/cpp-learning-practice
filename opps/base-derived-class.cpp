#include <iostream>
#include <string>
using namespace std;

class baseClass
{
private:
    int numOne, numTwo;

public:
    void sumNum(int a, int b)
    {
        numOne = a;
        numTwo = b;
        int sum = numOne + numTwo;
        cout << "The sum of 2 num is = " << sum << endl;
    }
};

class derivedClass : public baseClass
{
private:
    int hiddenData1;
    int hiddenData2;

public:
    void sumOfHiddenData(int data1, int data2)
    {
        hiddenData1 = data1;
        hiddenData2 = data2;
        cout<<"Hidden data 1 = "<<hiddenData1<<endl;
        cout<<"Hidden data 1 = "<<hiddenData2<<endl;
    }
};

int main(void)
{
    derivedClass derivedObj;
    derivedObj.sumNum(10,20);
}