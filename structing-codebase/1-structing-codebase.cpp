#include <iostream>
using namespace std;
// STructing codebase - Organizing code for better understandable, maintainable and realible.

// Techniques for stricting codebase :

// ▶️1. Namespace(This is keyword) - This is tool for organizing the code. Make name for different identifiers you create like function, classess and variables.

// ▶️2. Include Guards - This is also tool. preventing multiple inclusions of a header file in projects. In the C and C++ programming languages, an #include guard, sometimes called a macro guard, header guard, or file guard, is a particular construct used to avoid the problem of double inclusion when dealing with the include directive.
// ▶️3. Header and Source Files - Separating your implementation and declarations into header (.h) and source (.cpp) files is a key aspect of structuring your codebase in C++. Header files usually contain class and function declarations, while source files contain their definitions.

namespace basicFunctionGroup
{
    void aFunction()
    {
        cout << "This is namespace techniques" << endl;
    }
}

namespace mathFunction
{
    void sumFunction(int a, int b)
    {
        int c = a + b;
        cout << "The sum of given number = " << c << endl;
    }

    void subtractNumberFunc(int a, int b)
    {
        int c = b - a;
        cout << "The subtraction of number = " << c << endl;
    }

    namespace advanceMath
    {
        void percenteCalculator(int a)
        {
            int c = a / 100;
            cout << "The percent = " << c << endl;
        }
    }
}

int main(void)
{
    // basicFunctionGroup::aFunction();
    // mathFunction::sumFunction(10,20);
    // mathFunction::advanceMath::percenteCalculator(200);//nested namespace access
}