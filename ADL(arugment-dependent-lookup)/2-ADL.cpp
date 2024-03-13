#include <iostream>
using namespace std;
namespace groupOne
{
    void functionOne()
    {
        cout << "Function One = Group One" << endl;
    }

    void functionTwo()
    {
        cout << "Function Two = Group One" << endl;
    }
};

namespace groupTwo
{
    void functionOne()
    {
        cout << "Function One = Group Two" << endl;
    }

    void functionTwo()
    {
        cout << "Function Two = Group Two" << endl;
    }
};

int main(void)
{
    groupOne::functionOne();
}