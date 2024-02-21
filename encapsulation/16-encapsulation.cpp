#include <iostream>
using namespace std;

/*- Design a class **`Temperature`** with a private member variable for temperature in Fahrenheit.
- Implement public member functions to convert the temperature to Celsius and Kelvin.
*/

class Tempreture
{
private:
    int farenheight;

public:
    void setTempreture(int a)
    {
        farenheight = a;
    }

    int ferenToCelc()
    {
        int celcious;
        celcious = (farenheight - 32) * 5 / 9;
        return celcious;
    }

    float farenToKelvin()
    {
        float kelvin;
        kelvin = (farenheight - 32) * 5 / 9 + 273.15;
        return kelvin;
    }
};

int main(void)
{
    Tempreture tempFaren;
    tempFaren.setTempreture(20);
    cout << "Celcious = " << tempFaren.ferenToCelc() << endl;
    cout << "Kelvin = " << tempFaren.farenToKelvin() << endl;
}