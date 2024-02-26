#include <iostream>
using namespace std;

// lambda function with parameter
auto addNumber = [](int a, int b)
{
    int c;
    c = a + b;
    return c;
};

auto subtractNum = [](int a, int b){
    int c = a-b;
    return c;
};

int main(void)
{
    int totalSum = addNumber(10, 20);
    int subtract = subtractNum(100, 20);
    cout << "The sum = " << totalSum << endl;
    cout << "The subtract = " << subtract << endl;

}