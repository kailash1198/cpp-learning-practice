#include <iostream>

// Template Class with Multiple Types: Create a template class that can handle multiple data types simultaneously, such as a container that can store integers or strings.
template <typename userType, typename ageType>

class container
{
public:
    userType firstName;
    userType secondName;
    ageType age;
};

int main()
{
    container<std::string, int> userOne;
    userOne.firstName = "Kailash";
    userOne.secondName = "Kumar";
    userOne.age = 10;

    std::cout<<userOne.firstName<<std::endl;
    std::cout<<userOne.secondName<<std::endl;
    std::cout<<userOne.age<<std::endl;

    return 0;
}