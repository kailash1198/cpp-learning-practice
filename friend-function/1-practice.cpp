#include <iostream>
using namespace std;
// Friend Function

// class one
class one
{
private:
    int numOne;
    int numTwo;

public:
    friend void funcOne(one &myObj);
    void funcTwo()
    {
        cout << "This is function two" << endl;
    }
};

// class two
class two
{
private:
    int one;
    int two;

public:
};

void funcOne(one &myObj)
{
    myObj.numOne = 10;
    cout << "Num One = " << myObj.numOne << endl;
}
int main(void)
{
    one objOne;
    funcOne(objOne);
}