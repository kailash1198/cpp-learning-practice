#include <iostream>
using namespace std;

class vehicle
{
private:
    string vehicleName;
    int vehicleModel;
    int vehicleCode;

public:
    vehicle()
    {
    }
    vehicle(string name, int model, int code)
    {
        vehicleName = name;
        vehicleModel = model;
        vehicleCode = code;
    }

    void SetFromUser()
    {
        cout << "Enter name: ";
        cin >> vehicleName;
        cout << "Model : ";
        cin >> vehicleModel;
        cout << "Code : ";
        cin >> vehicleCode;
    }

    string getName()
    {
        return vehicleName;
    }

    int getVehicleModel()
    {
        return vehicleModel;
    }

    int getVehicleCode()
    {
        return vehicleCode;
    }
};

int main(void)
{
    vehicle carOne;
    carOne.SetFromUser();

    system("cls");
    
    cout << carOne.getName() << endl;
    cout << carOne.getVehicleModel() << endl;
    cout << carOne.getVehicleCode() << endl;
}