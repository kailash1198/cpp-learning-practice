#include <iostream>
#include <string>
using namespace std;

class vehicle
{
public:
    virtual void startVehicle() = 0;
    virtual void stopVehicle() = 0;
};

class car : public vehicle
{
public:
    void startVehicle()
    {
        cout << "Car Start" << endl;
    };

    void stopVehicle()
    {
        cout << "Car Stop" << endl;
    };
};

class bike : public vehicle
{
public:
    void startVehicle()
    {
        cout << "Bike Start" << endl;
    };
    void stopVehicle()
    {
        cout << "Bike Stop" << endl;
    }
};

int main(void)
{
    vehicle *pointer;
    pointer = new car(); // allocated memory dynamically for store car() class in base pointer
    pointer->startVehicle();
    pointer->stopVehicle();

    pointer =new bike();
    pointer->startVehicle();
    pointer->stopVehicle();
}