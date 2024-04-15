#include <iostream>

class Number {
private:
    int value;

public:
    // Constructor
    Number(int val){
        value = val;
    }

    // Assignment Operator Overloading
    Number& operator=(const Number& other) {
        if (this != &other) { // Avoid self-assignment
            value = other.value; // Copy the value
        }
        return *this; // Return reference to allow chaining
    }

    // Display the value
    void display() {
        std::cout << "Value: " << value << std::endl;
    }
};

int main() {
    Number num1(5);
    Number num2(10);

    num2 = num1;

    num2.display();

    return 0;
}
