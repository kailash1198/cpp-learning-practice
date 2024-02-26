#include <iostream>
using namespace std;
// lambda function capture clause - By default lambda function not access variable
// when you want to access those variable you can use capture clause
// you can say default value of function using pass variable in lambda function.
// you just simply pass variable as an parameter in lambda function [] bracket.

// lambda function also define in main function and also outside of the main function. But some limitation have when you define outside of main function - the limitation is lambda function not capture value when you defined outside of main function

// 1. Capture by Value (calling function by value)
// int numValue = 200;
// auto funcOne = [numValue]()
// {
//     cout << numValue << endl;
// };

// 2. capture by reference (calling function by reference)
// int numTwo = 100;
// auto funcTwo = [&numTwo](int a)
// {
//     numTwo = 300;
//     return numTwo + a;
// };

// with overcome above error you have to defined lambda function in main() becuase when you defined outside of main that means it is not accessible. Thats why above you get error when you capture value

int main(void)
{
    // 1. Capture by Value (calling function by value)
    int numValue = 200;
    auto funcOne = [numValue]()
    {
        cout << numValue << endl;
    };

    // 2. capture by reference (calling function by reference)
    int numTwo = 100;
    auto funcTwo = [&numTwo](int a)
    {
        numTwo = 300;
        return numTwo + a;
    };
}