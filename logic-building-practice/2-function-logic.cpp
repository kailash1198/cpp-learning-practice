#include <iostream>
#include <string>
using namespace std;
// Logic Statement - Write a function that takes a string as input and returns the number of vowels in the string.

int vowelCount(string text)
{
    char vowel[5] = {'a', 'e', 'i', 'o', 'u'};
    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < text.length(); j++)
        {
            if (vowel[i] == text[j])
            {
                count += i;
            }
        }
    }
    return count;
}
int main(void)
{
    string myName = "prince";
    int total = vowelCount(myName);
    cout << "Total count = " << total << endl;
}