// Implement a simple animal hierarchy (e.g., Animal, Dog, Cat, Bird, etc.) where each animal makes a sound (e.g., makeSound()). Demonstrate polymorphism by iterating through an array of Animal pointers and calling makeSound() for each, without knowing the specific type of each animal.

#include <iostream>
using namespace std;

class animal{
    public:
    void makeSound(){

    }
};

class dog: public animal{

};

int main()
{
}