#include <iostream>
using namespace std;
// Lambda Function -  Lambda is a Expression which allow us to define anonymous function objects(Functors means function objects)
// lambda function also define in main function and also outside of the main function. But some limitation have when you define outside of main function - the limitation is lambda function not capture value when you defined outside of main function
// which can either be used Inline or passed as an arguments
// auto keyword are used to automatic return type of lambda function
//[] - This bracket for start lambda expression, () - This is for parameter list which is similar to normal function.
auto greet = []()
{
    cout << "This is lambda function invoked" << endl;
};

int main(void)
{
    // invoked lambda function
    greet();
}