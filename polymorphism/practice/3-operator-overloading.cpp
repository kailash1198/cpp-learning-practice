#include <iostream>
using namespace std;
class baseClass
{
private:
    int numOne;
    int numTwo;
    

public:
    baseClass(int a, int b)
    {
        numOne = a;
        numTwo = b;
    };

   
    baseClass operator+(const baseClass &obj)
    {
        int newNumOne = numOne + obj.numOne;
        int newNumTwo = numTwo + obj.numTwo;
        return baseClass(newNumOne, newNumTwo);
    }

    void display()const{
        cout<< numOne<<" "<<numTwo<<endl;
    }
};

int main()
{
    baseClass objOne(1, 2);
    baseClass objTwo(5, 5);

    baseClass sum = objOne+objTwo;
    sum.display();

    return 0;
}