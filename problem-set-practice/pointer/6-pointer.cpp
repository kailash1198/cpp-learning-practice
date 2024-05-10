#include <iostream>
// Create a function to concatenate two strings using pointers.
void concateString(std::string *str1, std::string *str2)
{
    std::string *strTemp = &str1->append(*str2);
    std::cout<<*strTemp<<std::endl;
};

int main()
{
    std::string firstName = "Kailash";
    std::string lastName = "kumar";

    concateString(&firstName, &lastName);
    return 0;
}