#include <iostream>
using namespace std;

class baseClass
{
private:
    int numOne = 10;
    int numTwo = 20;

public:

    baseClass()
    {
        cout<<"Please enter numOne Value: ";
        cin>>numOne;
        cout<<"Please enter numTwo value: ";
        cin>>numTwo;
    }

    void display()
    {
        cout << numOne << endl
             << numTwo << endl;
    }
    // ~baseClass();

};

int main(void)
{
    baseClass obj;
    obj.display();
}