#include <iostream>
using namespace std;
struct user_data
{
    string name;
    int total;
};
int main()
{

    user_data userObj;
    user_data *userPtr;

    userPtr = &userObj;
    userPtr->name = "Kailash";
    cout<<userPtr->name<<endl;
    return 0;
}