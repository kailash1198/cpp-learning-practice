/* - Create a class **`Product`** with private member variables for product ID, name, price, and quantity in stock.
- Implement public member functions to manage inventory (add stock, sell product, and adjust price) and display product details.*/

#include <iostream>
using namespace std;

class product
{
private:
    int id;
    string name;
    float price;
    int quentity;

public:
    void addStock()
    {
        cout << "Product ID : ";
        cin >> id;
        cout << "Product Name : ";
        cin >> name;
        cout << "Product Price : ";
        cin >> price;
        cout << "Quantity : ";
        cin >> quentity;
    }

    void productDetails()
    {
        cout << "Product ID : " << id << endl;
        cout << "Product Name : " << name << endl;
        cout << "Product Price : " << price << endl;
        cout << "Quantity : " << quentity << endl;
    }

    void sellProduct()
    {
        int num;
        cout << "Enter sell quantity : ";
        cin >> num;
        quentity -= num;
        cout << "Now stock = " << quentity << endl;
    }

    void changePrice()
    {
        int a;
        cout << "How much price do you want change : ";
        cin >> a;
        price -= a;
        cout << "Now final price = " << price << endl;
    }
};

int main(void)
{
    product proOne;

    proOne.addStock();
    proOne.productDetails();

    proOne.sellProduct();
    proOne.productDetails();
    
    proOne.changePrice();
    proOne.productDetails();
}