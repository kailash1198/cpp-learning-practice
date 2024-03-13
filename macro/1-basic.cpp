#include <iostream>
using namespace std;
#define MY_NAME "Kailash"
// Macro - Replace the text
//1. Constant Macro
#define PI 3.14

//2. Function-like macro
#define SQARE(x)((x)*(x))

//3. Conditional compilation
// goto 2-macro.cpp

int main(void)
{
    cout << MY_NAME << endl;
    int squareCall = SQARE(10);
    cout<<squareCall<<endl;
}