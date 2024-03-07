#include <cstdlib> //exit()
#include <iostream>
using namespace std;
// Exit Codes - Also known is for return or status code. Which return any numeric values. This return when program excuted finished.

// This is used for indicated sucess or failure of the program.

// exit() is inbuilt library <cstdlib> function for return exit codes.As a argument yu can use 0(True) or 1(false).
int main()
{

    int numOne = 10;
    int numTwo = 20;
    if (numOne < numTwo)
    {
        cout << "Numone is less than numTwo" << endl;
        exit(2);
    }
    cout << "Last statement after exit() execute inside control statement" << endl; // This is not executed because exit() function called. When exit called that means program immediate terminated at this line.Because exit means stop. 1 possiblity have if exit function not execute. And this situation happen currently if condition false that means if statement not execute then this line works and execute. This depend on If else statement in program.
    return 0;   // This is exit codes its return 0 means execution successful.
}