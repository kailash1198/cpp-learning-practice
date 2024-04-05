#include <iostream>
using namespace std;
template <class userType>

class animal
{
private:
    userType animalName;
    userType animalType;

public:
    void animalInfo(userType a, userType b)
    {
        animalName = a;
        animalType = b;

        cout << animalName << endl;
        cout << animalType << endl;
    }
};

int main()
{
    animal<string> one;
    one.animalInfo("Elephant", "Jungle");
    return 0;
}