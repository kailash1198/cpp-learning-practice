#include <iostream>
using namespace std;

class classOne
{
public:
    int numOne;
    class nestedClassOne
    {
    public:
        int nestedNumOne;
        class nestedClassTwo
        {
        public:
            int nestedClassTwoNumOne;
        };
    };
};
int main(void)
{
    classOne::nestedClassOne::nestedClassTwo obj1;
    obj1.nestedClassTwoNumOne = 200;
    cout << obj1.nestedClassTwoNumOne << endl;
}