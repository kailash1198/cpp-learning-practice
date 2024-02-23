#include <iostream>
using namespace std;
// Parameterized constructor - When give argumenets while define constructor.
//argument may be more then one, as per requirement
class mainClass
{
    private:
    int numOne;
    int numTwo;

public:
    mainClass(int arguOne, int arguTwo)
    {
        this->numOne = arguOne; //this is optional, we can iniliaze without this keywords
        this->numTwo = arguTwo;
    };

    void display(){
        cout<<this->numOne<<endl;
        cout<<this->numTwo<<endl;
    }
};

int main(void)
{
    mainClass objOne(10, 20);
    objOne = mainClass(50, 40);
    objOne.display();
}