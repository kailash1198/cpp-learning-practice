#include <iostream>
using namespace std;

class vehicle
{
private:
    int speed;

public:
    vehicle()
    {
        speed = 0;
    }

    void start()
    {
        cout << "Vechile now started" << endl;
    }

    void accelarate()
    {
        speed++;
    }

    int getSpeed()
    {
        return speed;
    }
};

int main(void)
{
    vehicle car;
    car.start();

    for (int i = 0; i < 500; i++)
    {
        car.accelarate();
    }

    cout << "Your speed is " << car.getSpeed() << " Km/Hours" << endl;
}