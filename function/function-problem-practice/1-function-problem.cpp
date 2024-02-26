#include <iostream>
#include <string>
using namespace std;
// problem statement - Write a function that takes a string as input and returns the string in reverse order.

string reverseStringFunc(string text)
{
    string reverseString;
    int lengthOfString = text.length();
    for(int i=lengthOfString; i>=0; i--){
        reverseString += text[i];
    }

    return reverseString;
}
int main(void)
{
    string myName = "kailash";
    string result = reverseStringFunc(myName);
    cout<<result<<endl;
}