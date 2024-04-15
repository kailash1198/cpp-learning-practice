#include <iostream>
using namespace std;

class baseClass
{
private:
    int a;

public:
    baseClass()
    {
        a = 10;
    }

    void printVar()
    {
        cout << this->a << endl;
    }
};

int main()
{
    baseClass objOne;
    objOne.printVar();
    return 0;
}