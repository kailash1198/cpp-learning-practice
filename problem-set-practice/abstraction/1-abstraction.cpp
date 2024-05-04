#include <iostream>
#include <string>
// Create a simplified version of an online shopping cart system.
//  Implement classes for products, customers, and the shopping cart.
// Use abstraction to handle adding/removing items from the cart and calculating the total cost.

// ▶️  Product class - for product details information saving
class product
{
protected:
    std::string product_name;
    std::string product_desc;
    int product_code;
    int product_qty;
    int product_price;

public:
    product()
    {
        product_price = 10;
    }
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

    std::string prouduct_get()
    {

        return product_name;
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

    int calculateCost(int qty)
    {
        product productOne;
        int totalMoney = qty * 10;
        return totalMoney;
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
        int productQty;
        std::cout << "Create Product List";
        std::cout << "How many product do you want to create : ";
        std::cin >> productQty;

        product *productList;
        for (int i = 0; i < productQty; i++)
        {
            productList = new product;
            productList->createProduct();
        }

        system("cls");
        std::string proud_search_question;
        std::cout << "Search Proudct for Purchase : ";
        std::cin >> proud_search_question;

        if (proud_search_question == productList->prouduct_get())
        {
            std::string cartQuestion;
            std::cout << "DO you want to add in cart : ";
            std::cin >> cartQuestion;
            if (cartQuestion == "yes")
            {
                int qty;
                std::cout << "Enter qty : ";
                std::cin >> qty;
                shoppingCart cart;
                
                system("cls");
                std::cout<<"------------------"<<std::endl;
                int total = cart.calculateCost(qty);
                std::cout<<"Total cost = "<<total<<std::endl;
            }
        }
    }

    //
    return 0;
}