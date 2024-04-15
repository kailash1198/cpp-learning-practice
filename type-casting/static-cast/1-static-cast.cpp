#include <iostream>
using namespace std;

int main()
{
    // float to int using static data types
    float numOne = 14.34;

    int newType = static_cast<int>(numOne);
    cout << newType << endl;

    // float a=3.34;
    // cout<<a<<endl;
    return 0;
}