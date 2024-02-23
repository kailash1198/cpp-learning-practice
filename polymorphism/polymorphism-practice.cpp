#include <iostream>
using namespace std;
// polymorphism practice
class animal
{
public:
    virtual void animalSound()
    {
        cout << "Animal sound output" << endl;
    }
};

class dog : public animal
{
public:
    void animalSound()
    {
        cout << "This is dog sound output" << endl;
    }
};

class cat : public animal
{
public:
    void animalSound()
    {
        cout << "This is cat sound output" << endl;
    }
};

int main(void)
{
    animal *animalPtr[2];
    dog dogVoice;
    cat catVoice;
    animalPtr[0] = &dogVoice;
    animalPtr[1] = &catVoice;

    animalPtr[0]->animalSound();
    animalPtr[1]->animalSound();

    
}