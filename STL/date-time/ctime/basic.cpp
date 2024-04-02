#include <ctime>
#include <iostream>
using namespace std;

int main(void)
{
    // ▶️time_t
    //  time_t myTime;
    //  cout<<time(&myTime)<<endl;

    // time_t currentTime = time(&currentTime);
    // cout<<currentTime<<endl;

    // time_t currentTime = time(nullptr);
    // cout<<currentTime<<endl;

    // ▶️clock_t
    // clock_t clockTime = clock();
    // cout << clockTime;

    clock_t startClock;
    clock_t endClock;
    startClock = clock(); // clock start
    // Operation start for checking how much cpu take time :
    int sum = 0;
    for (int i = 0; i < 1000079999; i++)
    {
        sum += i;
    }
    // Operation end
    endClock = clock(); // clock end

    double cpu_time_used = ((double)(endClock - startClock)) / CLOCKS_PER_SEC;
    cout << "CPU time used : " << cpu_time_used << endl;
}