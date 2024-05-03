#include <iostream>
#include <string>
// Create a simplified version of an online shopping cart system.
//  Implement classes for products, customers, and the shopping cart.
// Use abstraction to handle adding/removing items from the cart and calculating the total cost.

// ▶️  Product class - for product details information saving
class product
{
private:
    std::string product_name;
    std::string product_desc;
    int product_code;
    int product_qty;

public:
    void createProduct()
    {
        std::cout << "Enter product Name : ";
        std::cin >> product_name;

        std::cout << "Enter product description : ";
        std::cin >> product_desc;

        std::cout << "Product Code : ";
        std::cin >> product_code;

        std::cout << "Qty : ";
        std::cin >> product_qty;
    }
};

// ▶️  Custumer class - for Custumer details information saving
class custumer
{
private:
    std::string custumer_name;
    int custumer_id;
    long int custumer_mobile;

public:
    void createAccount()
    {
        std::cout << "Enter custumer Name : ";
        std::cin >> custumer_name;

        std::cout << "Custumer ID : ";
        std::cin >> custumer_id;

        std::cout << "Mobile Number : ";
        std::cin >> custumer_mobile;
    }

    void deleteCustumer()
    {
        long int mob_num;
        std::cout << "Enter Mobile number : ";
        std::cin >> mob_num;

        if (mob_num == custumer_mobile)
        {
        }
    }
};

// ▶️  Shopping cart class - for Shopping card details handling
class shoppingCart : public product
{
private:
    int totalCost;
    int totalQty;

public:
    void addItems()
    {
    }

    void removeItems()
    {
    }

    void calculateCost()
    {
    }
};

int main()
{
    std::cout << "Welcome to My Store" << std::endl;
    std::cout << "--------------------------" << std::endl;

    std::string userAnswer;
    std::cout << "Do you have an Account : ";
    std::cin >> userAnswer;

    if (userAnswer == "yes")
    {
        product productOne;
        productOne.createProduct();

        std::string buyAnswer;
        std::cout << "Are you want to buy";
        std::cin >> buyAnswer;
        if(buyAnswer=="yes"){
            
        }else{

        }
    }
    else
    {
        custumer custumerOne;
        custumerOne.createAccount();
    }

    //
    return 0;
}