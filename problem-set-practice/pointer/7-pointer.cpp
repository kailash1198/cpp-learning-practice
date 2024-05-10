#include <iostream>
// Implement a function to count the number of occurrences of a character in a string using pointers.
void charCount(std::string &str, char key)
{
    int count = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == key)
        {
            count++;
        }
    }

    std::cout << "Number of occurance : " << count << std::endl;
};

int main()
{
    std::string userName = "kailash";
    charCount(userName, 'a');
    return 0;
}