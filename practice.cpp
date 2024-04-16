#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int binaryToDecimal(string binary) {
    int decimal = 0;
    int power = 0;
    
    // Start from the rightmost bit
    for (int i = binary.length() - 1; i >= 0; --i) {
        if (binary[i] == '1') {
            decimal += pow(2, power);
        }
        power++;
    }
    
    return decimal;
}

int main() {
    string binaryNumber;
    cout << "Enter a binary number: ";
    cin >> binaryNumber;
    
    int decimalNumber = binaryToDecimal(binaryNumber);
    cout << "Decimal equivalent: " << decimalNumber << endl;
    
    return 0;
}
