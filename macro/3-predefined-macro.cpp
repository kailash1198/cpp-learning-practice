#include <iostream>
using namespace std;
//Pre defined macro
int main(void)
{
    string currentDate = __DATE__;
    cout << currentDate << endl;

    string currentTime = __TIME__;
    cout << currentTime << endl;
}