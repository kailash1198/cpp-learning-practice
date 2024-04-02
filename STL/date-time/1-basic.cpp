#include <chrono> // for data and time
#include <ctime>  // this also use for data and time
#include <iostream>
using namespace std;
// For working with data and time we are using [chrono]  library.
int main(void)
{
    // ctime library practice
    time_t currentTime;
    time(&currentTime);
    cout << currentTime << endl;

    // chrono library practice
    // duration
    // chrono::seconds sec(10);
    // chrono::minutes min(2);
    // chrono::hours hr(2);
}