#include <iostream>
#include <string>

// Create overloaded functions to convert temperatures between Fahrenheit and Celsius (takes a double temperature and a character 'F' or 'C' to specify the unit).

double farenToCelc(double farenheight)
{

    double celcious = (farenheight - 32) * (5 / 9);
    return celcious;
}

double celToFaren(double celcious)
{

    double farenheight = (celcious * (9 / 5)) + 32;
    return farenheight;
}

double tempretureConvert(double tempreture, char unit)
{
    if (unit == 'c' || unit == 'C')
    {
        return celToFaren(tempreture);
    }
    else if (unit == 'f' || unit == 'F')
    {
        return farenToCelc(tempreture);
    }
}

int main(void)
{
    double temp = 30;

    double CtoF = tempretureConvert(temp, 'f');
    double FtoC = tempretureConvert(temp, 'c');

    std::cout << "C to F = " << CtoF << std::endl
              << std::endl;
    std::cout << "F to C = " << FtoC << std::endl
              << std::endl;
}