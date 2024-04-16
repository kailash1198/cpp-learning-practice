#include <iostream>
using namespace std;

class myClass
{
public:
    int numOne;
};

int main()
{
    myClass obj;

    obj.numOne = 10;

    int myClass::*ptr = &myClass::numOne;
    cout << obj.*ptr << endl;

    return 0;
}