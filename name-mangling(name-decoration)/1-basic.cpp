#include <iostream>
using namespace std;
// Name Mangling or Name Decoration : This is technique used by compiler for encode additional information about scope, function name, variable name within its name.

// The main use of name mangling is for support function overloading.

// WHen define and variable or identifiers then compiler automatically generate mangled name. Its depend on compiler.

// Different comppiler generate mangling name different, Its totally depend on compiler for generate mangling name by compiler.

// When compiler generate mangling name that means its look like code format so you can encode to original name format with the help of compiler generated name mangling

void funcOne(int a, int b)
{
    cout << a << b << endl;
}

// In above function compiler generate name something look like : _Z3addii

// Some tools are there for compiler generate mangling name to back to original name format. Tools like - c++ filt

int main(void)
{
    int numOne;
    int numTwo;
}

// for more details visit Notes of C++ in goodotes ipad page number = 21