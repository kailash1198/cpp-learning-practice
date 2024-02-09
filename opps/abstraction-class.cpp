#include <iostream>
#include <string>
using namespace std;

class firstClass
{
private:
public:
    int numOne;
    int numTwo;
    virtual void sumNum() = 0;
};

class secondClass : public firstClass
{
private:
public:
    void sumNum(int a, int b)
    {
        numOne = a;
        numTwo = b;
        int c = numOne + numTwo;
        cout << "The sum c = " << c << endl;
    }
};

main(void)
{
    // abstraction class concept and examples(in abstract class we always need atleast 1 virtual function)
}