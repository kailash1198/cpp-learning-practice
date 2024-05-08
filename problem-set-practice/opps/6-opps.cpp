#include <iostream>
using namespace std;

class parking
{
private:
    bool *parkingSpace;
    int n;

public:
    parking() = default;
    parking(int size)
    {
        n = size;
        parkingSpace = new bool(size);
        cout << "Parking space size = " << size << endl;
        for (int i = 0; i < size; i++)
        {
            parkingSpace[i] = true;
        }

        for (int i = 0; i < size; i++)
        {
            cout << parkingSpace[i] << " ";
        }
        cout << endl;
        cout << "----------------------" << endl;
    }



    void parkVehicle(int spaceNumber)
    {
        for (int i = 0; i < n; i++)
        {
            if (parkingSpace[spaceNumber] == true)
            {
                parkingSpace[spaceNumber] = false;
            }
           
        }
        cout<<"Your vehicle park in space : "<<spaceNumber<<endl;
    }

        void spaceStatus()
    {
        cout << "Parking Status : " << endl
             << endl;

        for (int i = 0; i < n; i++)
        {
            cout << parkingSpace[i] << " ";
        }
        cout << endl;
        cout << "----------------------" << endl;
    }
};



int main()
{
    parking apartment(10);
    apartment.spaceStatus();

    apartment.parkVehicle(3);
    apartment.parkVehicle(2);
    apartment.parkVehicle(0);
    apartment.parkVehicle(1);
    apartment.spaceStatus();
    return 0;
}