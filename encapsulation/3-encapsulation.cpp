#include <iostream>
using namespace std;

class company
{
private:
    int sallery;

public:
    void setSallery(int a)
    {
        sallery = a;
    }

    int getSallery()
    {
        return sallery;
    }
};

int main(void)
{
    company employeeOne;
    employeeOne.setSallery(50000);
    int salleryOfEmployee = employeeOne.getSallery();
    cout << "The salary is : " << salleryOfEmployee << endl;
}