#include <ctime>
#include <iostream>
using namespace std;
// this function use for print time(current) as a string format(human readale) with help of time struct tm*
int main(void)
{
    time_t currentTime;

    struct tm *timeDetail;

    time(&currentTime);
    timeDetail = localtime(&currentTime);
    cout << asctime(timeDetail) << endl;
}