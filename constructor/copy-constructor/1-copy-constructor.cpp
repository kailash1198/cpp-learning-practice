#include <iostream>
using namespace std;

class baseClass
{
private:
    int numOne;
    int numTwo;

public:
    baseClass(int a, int b)
    {
        numOne = a;
        numTwo = b;
    }
    baseClass(baseClass &obj)
    {
        obj.numOne = 10;
        obj.numTwo = 20;

        cout << obj.numOne << endl;
        cout << obj.numTwo << endl;
    }
};

int main()
{
    baseClass objOne(1, 2);
    baseClass objTwo(objOne);

    return 0;
}