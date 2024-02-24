#include <iostream>
using namespace std;
class animal
{
private:
    string animalName;
    int animalCode;

public:
    animal(string a, int b)
    {
        animalName = a;
        animalCode = b;
    }
    animal(animal &acess)
    {
        animalName = acess.animalName;
        animalCode = acess.animalCode;
        cout << "Animal name : " << animalName << endl;
        cout << "Animal code : " << animalCode << endl;
    }
};
int main(void)
{
    animal animalOne("Dog", 1), animalTwo("Cow", 2);
    // copy from animalOne
    animal animalDetails(animalOne);
    // copy from animalDetails
    animal animalData(animalDetails);
}