#include <iostream>
// Temperature Conversion:🤷🤷
// Create a union that can store a temperature value either in Celsius or Fahrenheit.
// Write functions to convert temperatures from Celsius to Fahrenheit and vice versa.

union tempretureData
{
    double celcious;
    double farenheight;
};

double tempretureConverter(char type, double value)
{
    double result;
    if (type == 'f')
    {
        // farenheight to celcious
        result = (value - 32) * (5 / 9);
    }
    else if (type == 'c')
    {
        // celcious to farenheight
        result = (value * 9 / 5) + 32;
    }
    else
    {
        std::cout << "Please give correct type conversion for convert tempreture" << std::endl;
    }
    return result;
}

int main()
{
    tempretureData data;
    data.farenheight = 10;
    data.celcious = 20;

    double resultOne = tempretureConverter('f', data.farenheight);
    std::cout << "Farenheight to Celcious(C) = " << resultOne << std::endl;

    double resultTwo = tempretureConverter('c', data.celcious);
    std::cout << "Celcious to Farenheight(F) = " << resultTwo << std::endl;

    return 0;
}