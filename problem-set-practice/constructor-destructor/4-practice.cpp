#include <iostream>
// Develop a class for a car with constructors and a destructor.

class car
{
private:
    std::string car_name;
    int model;
    int year;

public:
    car(std::string a, int b, int c)
    {
        car_name = a;
        model = b;
        year = c;
    }

    ~car()
    {
        std::cout << "Memory realeased" << std::endl;
    }
};

int main()
{
    car car_one("TATA", 10, 2023);

    return 0;
}