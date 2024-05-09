#include <iostream>
// Implement a class for a shopping cart with constructors and a destructor.
class shoppingCart
{
private:
    std::string product_name;
    std::string product_desc;
    int product_qty;
    double product_price;
    double total_price;

public:
    shoppingCart(std::string name, std::string desc, int qty, double rate, double totalRate)
    {
        product_name = name;
        product_desc = desc;
        product_qty = qty;
        product_price = rate;
        total_price = totalRate;
    }

    ~shoppingCart(){
        std::cout<<"Now shopping cart empty"<<std::endl;
    }
};

int main()
{
    shoppingCart userOne("Mobile", "smartphone", 12, 100, 1200);
    return 0;
}