#include <iostream>
using namespace std;
// auto keyword
int main()
{

    auto autoType = "Kailash";
    autoType = "Aryan";

    //autoType = 10; // error, because above you defined type when initialize firstly to this identifier.
    
    cout << autoType << endl;
    return 0;
}