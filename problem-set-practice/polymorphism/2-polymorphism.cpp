#include <iostream>
using namespace std;
// Implement a simple animal hierarchy (e.g., Animal, Dog, Cat, Bird, etc.) where each animal makes a sound (e.g., makeSound()). Demonstrate polymorphism by iterating through an array of Animal pointers and calling makeSound() for each, without knowing the specific type of each animal.

class animal
{
public:
    virtual void makeSound()
    {
        cout << "Animal sound" << endl;
    }
};

// dog
class dog : public animal
{
public:
    virtual void makeSound() override
    {
        cout << "Dog sound" << endl;
    }
};

// cat
class cat : public animal
{
public:
    virtual void makeSound() override
    {
        cout << "Cat sound" << endl;
    }
};

// bird
class bird : public animal
{
public:
    virtual void makeSound() override
    {
        cout << "Bird sound" << endl;
    }
};

int main(void)
{
    animal *animalPtr;
    dog dogOne;
    cat catOne;
    bird birdOne;

    animalPtr = &dogOne;
    animalPtr->makeSound();

    animalPtr = &catOne;
    animalPtr->makeSound();

    animalPtr = &birdOne;
    animalPtr->makeSound();
}