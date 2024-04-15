#include <iostream>
using namespace std;

// This - this is pointer where you can store the address of current class object.
// The use of this pointer is that within a class to refer to the current instance of the class

class classOne
{
private:
    int numOne;
    int numTwo;

public:
    classOne()
    {
        this->numOne = 1;
        this->numTwo = 2;
        
        cout<<this->numOne<<endl;
        cout<<this->numTwo<<endl;
    }
};

int main()
{
    classOne objOne;
    return 0;
}