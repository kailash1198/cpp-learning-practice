#include <iostream>
using namespace std;
// Destructor practice
class animal
{
private:
    string animalName;
    string animalType;

public:
    void animalData(){
        cout<<"Animal Name : "<<animalName<<endl;
        cout<<"Animal Type : "<<animalType<<endl;
    }
};

int main(void)
{
}