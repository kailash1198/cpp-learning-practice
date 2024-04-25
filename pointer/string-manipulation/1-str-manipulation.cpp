#include <iostream>
#include <string>
using namespace std;
// String Manipulation using Pointers
int main()
{
    char userName[] = "Kailash";
  

    char* str = userName;
    while(*str!='\0'){
        *str = toupper(*str);
        str++;
    }

    cout<<userName<<endl;
    return 0;
}