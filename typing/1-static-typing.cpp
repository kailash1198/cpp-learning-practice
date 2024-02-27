#include <iostream>
using namespace std;
// Static typing - In statically typed languages like C++, the data types of variables are determined at compile time. Once a variable is declared with a specific data type, it cannot hold values of any other type.

// typing like int, float and many more when assign value to other types in other value that means compiler give error of mismatch type error.
// Happen in compile time
// Typing refers to how data and variables are categorized based on their data types like integers, strings, or boolean.
int main(void)
{
    int num = 10; // this is static typing variable as an interger type

    //  num = "Kailash"; // get error becuase type not matched and attempting another type
    cout << num << endl;
}