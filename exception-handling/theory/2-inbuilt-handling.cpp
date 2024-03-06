#include <iostream>
#include <stdexcept>
using namespace std;

// Inbuilt exception handing practice

int main(void)
{
    try
    {
        int nominator = 100;
        int dominator = 0;
        int result;

        if (dominator == 0)
        {
            throw runtime_error("Devide by 0 to number not allowed");
        }

        result = nominator / dominator;
        cout << "Result after division = " << result << endl;
    }
    catch (const exception &e)
    {
        cerr << "Exception = " << e.what() << endl;
    }
}