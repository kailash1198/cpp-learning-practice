#include <iostream>
using namespace std;
class base
{
public:
    int numOne;
    int numTwo;
};

class derived : public base
{
};

int main(void)
{
    base *basePtr;
    derived *derivedPtr;
    derivedPtr = new derived();

    // base to derived type
    derivedPtr = static_cast<derived *>(basePtr);
    
    cout<<sizeof(derivedPtr)<<endl;
}