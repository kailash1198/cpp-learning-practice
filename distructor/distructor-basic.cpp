#include <iostream>
#include <string>
using namespace std;

class baseClass
{
private:
    int numOne;
    int numTwo;

public:
    // when we define constructor the its create object, so when we want to detroy this objects that means we have to use Destructor member function for destroy the object created by Constructors
    baseClass()
    {
        numOne = 10;
        numTwo = 20;
        cout << numOne << endl;
        cout << numTwo << endl;
    }

    // distructor
    ~baseClass()
    {
        cout << "Distructor call" << endl;
    }
};

int main(void)
{
    baseClass obj1;
    obj1.~baseClass();
}