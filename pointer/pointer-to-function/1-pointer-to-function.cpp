#include <iostream>
using namespace std;

void funcOne()
{
    cout << "This is function one" << endl;
};

// function type pointer variable
void (*funcPtr)();

int main()
{
    // pointer to function
    funcPtr = &funcOne;

    (*funcPtr)();
    funcPtr();

    return 0;
}