#include <iostream>

int main(void){
    int numOne = 100;
    int &numTwo = numOne;
    std::cout<<numTwo<<"\n";
}