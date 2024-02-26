#include <iostream>
using namespace std;
// functors with parameter and return type also
class numOperation
{
public:
    int operator()(int a, int b)
    {

        return a + b;
    }
};
int main(void)
{
    numOperation sumOne;
    int totalNum = sumOne(100, 200);
    cout << "Sum = " << totalNum << endl;
}