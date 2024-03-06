#include <iostream>
#include <stdexcept>
using namespace std;

int main(void)
{
    try
    {
        int numOne = 10;
        int numTwo = 1;
        int res;
        if (numTwo == 1)
        {
            throw runtime_error("You cannot divide by 1");
        }
        res = numOne / numTwo;
        cout << "Divide = " << res << endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}