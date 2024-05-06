#include <iostream>
using namespace std;

// static casting problem set practice : 🤷🤷🤷
// Create a class Distance with a private member meters. Write a constructor that takes an integer argument representing meters. Implement a toFeet() method that converts meters to feet (1 meter = 3.281 feet) and returns the result as a double. Use static_cast for the conversion.

class distance
{
private:
    int meter;

public:
    distance(int arg)
    {
        meter = arg;
    }

    double toFeet(int meterValue)
    {
        double one_meter_feet = 3.281;
        int result;
        static_cast<double>(result);
        result = one_meter_feet * meterValue;

        return result;
    }
};

int main()
{
    distance objOne(1);
    return 0;
}