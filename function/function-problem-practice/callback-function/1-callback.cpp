#include <iostream>
using namespace std;

// ➡️ callback function definition
void callBackFunction()
{
    cout << "This is callback function" << endl;
}

// ➡️ function -> take argument of callbackfunction from above
void myFunction(void(paraFunc()))
{
    cout << "This is main function" << endl;
    paraFunc();
    paraFunc();
}

int main()
{
    myFunction(callBackFunction);
    return 0;
}