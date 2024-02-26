#include <iostream>
#include <string>
using namespace std;

// LAMBDA function practice
auto calculateArea = [](int a, int b, string name) -> string
{
    if (name == "triangle")
    {
        return to_string(a + b); // return int
    }
    else
    {
        return name; // return string
    }
};

int main(void)
{
    // Example usage
    cout << calculateArea(3, 4, "triangle") << endl;
    cout << calculateArea(0, 0, "square") << endl;
}
