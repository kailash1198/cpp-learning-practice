#include <iostream>
using namespace std;

template <typename user_type>
user_type myFunc(user_type userInput)
{
    return userInput;
}

template <typename my_type>
void funcTwo(my_type userInput)
{
    cout << userInput << endl;
}

int main()
{
    string userName = myFunc("Kailash");
    cout << userName << endl;

    funcTwo(1);
    funcTwo("Aryan");
    funcTwo("singh");
    return 0;
}