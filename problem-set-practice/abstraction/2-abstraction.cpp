#include <iostream>

// Vehicle Management System: 🤷➡️
// Develop a system to manage different types of vehicles (e.g., cars, motorcycles, trucks).
// Implement classes for vehicles with common attributes like make, model, and year.
// Use abstraction to handle specific behaviors for each type of vehicle.

class vehicle
{
private:
    std::string make;
    std::string model;
    int year;

public:
    vehicle() = default;
    vehicle(std::string a, std::string b, int c)
    {
        make = a;
        model = b;
        year = c;
    }
};

class car : public vehicle
{

public:
    void setDetails(std::string a, std::string b, int c)
    {
        vehicle(a, b, c);
    }
};

class bike : public vehicle
{

public:
    void setDetails(std::string a, std::string b, int c)
    {
        vehicle(a, b, c);
    }
};
class truck : public vehicle
{

public:
    void setDetails(std::string a, std::string b, int c)
    {
        vehicle(a, b, c);
    }
};

int main()
{
    vehicle vehicleDetails();
    car carOne;
    bike bikeOne;
    truck truckOne;

    carOne.setDetails("Car", "Tata", 2023);
    bikeOne.setDetails("bike", "Tata", 2023);
    truckOne.setDetails("truck", "Tata", 2023);
    return 0;
}