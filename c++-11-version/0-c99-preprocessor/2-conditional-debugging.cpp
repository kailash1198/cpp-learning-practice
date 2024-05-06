#include <iostream>
#define DEBUG //if you not define this macro -> then conditional compiler not work that means your function not called during compile.

//DEBUG macro conditional compilation code
#ifdef DEBUG
void funcOne()
{
    std::cout << "Code executed" << std::endl;
}
#endif

int main()
{
    funcOne();
    return 0;
}