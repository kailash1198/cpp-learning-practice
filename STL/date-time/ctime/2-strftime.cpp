#include <ctime>
#include <iostream>
using namespace std;
// time and date format according to specified format
int main(void)
{
    struct tm timeDetails;
    char buffer[80];
    strftime(buffer, 80, " Now  its is : %I: %M: %P", &timeDetails);
    cout<<buffer<<endl;
}