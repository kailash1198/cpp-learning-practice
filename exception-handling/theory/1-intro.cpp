#include <iostream>
#include <stdexcept>
using namespace std;

// Exception Handling - AT run time some time program happen different from normal condition/behaviors. For this situation handling we use Exception handling concept in C++.

// Handle exception to keep our program to running.

// SOmetimes error/issue happen during execution of the program at run time and our program suddenly terminated.

// Two types of exception handling in c++
//  1. Synchonous - You got a error/Issue Something happen mistake in input data or data type not relate to working with them. For example diving any number by 0 (Zero).
//  2. Asynchronous - Beyond control for example disc failure or keyboard interrups.

// C++ provide inbuilt keyword for Exception Handling :
//  1. try
//  2. catch
//  3. throw
// For using this in built exception handing make sure yoi=u include header files  <stdexcept>

int main()
{
    int numOne = 100;
    int newNum = numOne / 0;
    cout << "New num = " << newNum << endl; // You get error becuase you cannot devide number by 0. This is synchronous exception handling.

    // Inbuilt keyword for exception handing
    // 1. try block
    // try
    // {
    // }

    return 0;
}