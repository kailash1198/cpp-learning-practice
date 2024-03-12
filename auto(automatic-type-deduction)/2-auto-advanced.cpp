#include <iostream>
using namespace std;
int numOne = 10;
auto *numTwo = &numOne;

int main(void)
{
    cout << *numTwo << endl;

    // lambda function with auto
    auto lambdaFunction = []()
    {
        cout << "This is lambda function" << endl;
    };

    lambdaFunction();

}