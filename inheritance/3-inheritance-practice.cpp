#include <iostream>
using namespace std;
// hirachical inheritance

// class-1
class vehicle
{
public:
    void fuel()
    {
        cout << "Fuel Added" << endl;
    }

    void startVehicle()
    {
        cout << "Start vehicle" << endl;
    }

    void stopVehicle()
    {
        cout << "Stop vehicle" << endl;
    }
};

// class-2
class car : public vehicle
{

public:
    void carModel()
    {
        cout << "Car model Function" << endl;
    }

    void carType()
    {
        cout << "Car type function" << endl;
    }
};

// class-3
class bus : public vehicle
{
public:
    void busModel()
    {
        cout << "Bus model function" << endl;
    }

    void busType()
    {
        cout << "Bus type function" << endl;
    }
};

int main(void)
{

    vehicle vehcileObj;
    car carOne;
    bus busOne;

    carOne.startVehicle();
    carOne.carModel();
    carOne.carType();

    busOne.startVehicle();
    busOne.busModel();
    busOne.busType();
}