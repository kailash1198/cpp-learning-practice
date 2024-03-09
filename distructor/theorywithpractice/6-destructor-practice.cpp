#include <iostream>
using namespace std;
int *numOne = 0;
int *numTwo = 0;
class baseClass
{

public:
    baseClass(int a, int b)
    {
        numOne = new int(a);
        numTwo = new int(b);

        cout << "Num One = " << *numOne << endl;
        cout << "Num One = " << *numTwo << endl;
    }

    ~baseClass()
    {
        cout << "Data memory Deleted" << endl;
        --numOne;
    }
};

int main(void)
{
    baseClass objOne(10, 20), objTwo(30, 40);
}