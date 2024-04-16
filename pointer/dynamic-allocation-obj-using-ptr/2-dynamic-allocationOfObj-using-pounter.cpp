#include <iostream>
using namespace std;

class animal
{
public:
    void animalSound()
    {
        cout << "Animal sound" << endl;
    }
};

struct student_data
{
    string name;
    int code;
};

int main()
{
    animal *animalPtr = new animal();
    animalPtr->animalSound();
    animalPtr->animalSound();

    student_data *stuPtr = new student_data();
    stuPtr->name = "Aryan";
    cout << stuPtr->name << endl;
    return 0;
}