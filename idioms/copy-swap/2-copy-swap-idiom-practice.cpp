#include <iostream>
using namespace std;

class baseClass
{
private:
    int numOne;
    int numTwo;

public:
    baseClass()
    {
        numOne = 0;
        numTwo = 0;
    };
    baseClass(baseClass &objOne)
    {
        objOne.numOne = 1;
        objOne.numTwo = 2;
    }

    void display()
    {
        cout << numOne << endl;
        cout << numTwo << endl;
    }
};

int main()
{
    baseClass objOne, objtwo;
    objOne.display();
    return 0;
}