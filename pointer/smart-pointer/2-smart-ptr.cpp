#include <iostream>
#include <memory>

int main()
{
    std::shared_ptr<int> myPtr = std::make_shared<int>(1);
    std::shared_ptr<int> ptrTwo = myPtr;

    // now we can use for as use normal pointer...
    return 0;
}