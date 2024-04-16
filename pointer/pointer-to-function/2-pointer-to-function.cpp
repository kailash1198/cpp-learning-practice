#include <iostream>
using namespace std;

void greeting()
{

    cout << "Welcome to greeting function" << endl;
}

void (*funcPtr)();


int main()
{
    funcPtr = &greeting;
    (*funcPtr)();

    return 0;
}