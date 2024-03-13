#include <iostream>
using namespace std;
#define DEBUG_MODE 

int main(void)
{
#ifdef DEBUG_MODE
    cout << "Debogging mode is now enabled" << endl;
#else
    cout << "Bebugging mode is disabled" << endl;
#endif
}