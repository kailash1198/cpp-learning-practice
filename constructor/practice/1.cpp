#include <iostream>
using namespace std;
class myClass
{
private:
    int numOne;
    int numTwo;
    int numThree;

public:
    myClass()
    {
        numOne = 10;
        numTwo = 0;
        numThree = 0;
        cout << numOne << endl
             << numTwo << endl
             << numThree << endl;
    }

    ~myClass()
    {
        cout << "Constructor destroyed" << endl;
        numOne++;
    }
    void funcOne()
    {
        cout << numOne << endl;
    }
};

int main(void)
{
    myClass obj;
    obj.funcOne();
}