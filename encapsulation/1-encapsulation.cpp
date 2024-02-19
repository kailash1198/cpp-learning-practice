#include <iostream>
using namespace std;

class baseClass
{
private:
    int numOne;
    int numTwo;

public:
    int devideByTwoFunc(int n)
    {
        numOne = n;
        numTwo = numOne / 2;
        return numTwo;
    }
};

int main(void)
{
    baseClass obj;
    int num, answer;
   cout<<"Enter number: ";
   cin>>num;
   answer =obj.devideByTwoFunc(num);
   cout<<"Answer : "<<answer<<endl;
}