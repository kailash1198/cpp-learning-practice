#include <iostream>
using namespace std;
#include <type_traits>

//Type Traits - 

int main()
{
    int a;
    int *ptr = &a;
    cout<<boolalpha<<is_pointer<decltype(a)>::value<<endl;
    return 0;
}