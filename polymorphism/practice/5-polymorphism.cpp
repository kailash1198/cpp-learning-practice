#include <iostream>
using namespace std;

class animal
{
public:
    virtual void animalClass()
    {
        cout << "This is animal class function called" << endl;
    }
};

class elephant : public animal
{
public:
    void animalClass() override
    {
        cout << "This is elephant class function called" << endl;
    }
};

int main()
{
    animal animal_obj;
    elephant elephant_obj;

    animal_obj.animalClass();
    elephant_obj.animalClass();


    animal *animalPtr;

    animalPtr = &elephant_obj;
    animalPtr->animalClass();

    return 0;
}