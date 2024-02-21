// Create a class representing a House with private member variables for address, number of rooms, and price. Implement public member functions to set and get these attributes, display the details of the house, and check if it is affordable (price within a certain budget).

#include <iostream>
using namespace std;
class house
{
private:
    string address;
    int totalRoom;
    float price;

public:
    void setHouseData(string a, int b, float c)
    {
        address = a;
        totalRoom = b;
        price = c;
    }

    void displayHouseData()
    {
        cout << "House Address : " << address << endl;
        cout << "House Room : " << totalRoom << endl;
        cout << "House Price : " << price << endl;
    }

    void checkAffordable(int budget)
    {
        if (budget <= price)
        {
            cout << "This is on budget" << endl;
        }
        else
        {
            cout << "This is not affordable" << endl;
        }
    }
};

int main(void)
{
    house custumerOne;
    custumerOne.setHouseData("Bangalore", 10, 10000);
    custumerOne.displayHouseData();
    custumerOne.checkAffordable(5000);
}