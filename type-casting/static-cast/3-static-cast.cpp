#include <iostream>
using namespace std;

void intToDouble(int num)
{
    
    double newNum = static_cast<double>(num);
    
    cout << "Int number : " << num << endl;
    cout << "Double Number : " << newNum << endl;
}

int main()
{
    int intNumber;
    cout << "Enter Integer number : ";
    cin >> intNumber;

    intToDouble(intNumber);
    return 0;
}