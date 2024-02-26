#include <iostream>
using namespace std;
// lambda function with return type
// implicit return - automatic by compiler
// explicit return - defned type by programmer to return

// implcit return - when only singly return and one type only
auto addNum = [](int a, int b)
{
    int c;
    c = a + b;
    return c;
};

// explicit return type  : ->return_type
// when we have to return multiple return and multiple type
auto funcTwo = [](int a, int b, string name) -> double
{
    if (name == "kailash")
    {
        return a + b;
    }
    else
    {
        return (a + b) / 2.0;
    }
};

int main(void)
{
    // implicit call
    int sumOne = addNum(100, 200);
    cout << "Sum num = " << sumOne << endl;

    // explicit call
    auto funcTwoResult = funcTwo(10, 20, "kailash");
    cout << "func two result : " << funcTwoResult << endl;

    auto funcTwoResultSecond = funcTwo(10, 25, "aryan");
    cout << "func two result : " << funcTwoResultSecond << endl;
}