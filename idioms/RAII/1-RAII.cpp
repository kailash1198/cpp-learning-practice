#include <iostream>
using namespace std;
// RAII - Resource Acquisition is initilization

class classOne
{
public:
    classOne()
    {
        cout << "Class one constructor" << endl;
    }
    void funcOne()
    {
        cout << "This is function one from class one" << endl;
    }
    ~classOne()
    {
        cout << "Class one destructor" << endl;
    }
};

int main()
{
    classOne objOne;
    objOne.funcOne();
    
    {
        classOne objTwo;
        objOne.funcOne();
        {
            objTwo.funcOne();
            objOne.funcOne();
        }
    }
    return 0;
}