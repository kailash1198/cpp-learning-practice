#include <iostream>
using namespace std;
// default constructor - no any arguments

class baseClass
{
public:
    baseClass()
    {
        cout << "This is default constructor" << endl;
    }
};

int main(void)
{
    baseClass obj;
}