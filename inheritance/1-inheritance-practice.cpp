#include <iostream>
using namespace std;
// class -1
class vehicle
{
public:
    void vehcile()
    {
        cout << "Vehcile class output" << endl;
    }
};

// class-2
class school
{
public:
    void schoolFunc()
    {
        cout << "School class output" << endl;
    }
};

// class-3
class hospital
{
public:
    void hospitalFunc()
    {
        cout << "Hospital class output" << endl;
    }
};

// derived multiple inheritance class
class car : public vehicle, public school, public hospital
{
public:
    void carFunc()
    {
        cout << "Car class output" << endl;
    }
};

int main(void)
{
    car derivedMultipleInheritance;
    derivedMultipleInheritance.vehcile();
    derivedMultipleInheritance.carFunc();
    derivedMultipleInheritance.hospitalFunc();
    derivedMultipleInheritance.schoolFunc();
}