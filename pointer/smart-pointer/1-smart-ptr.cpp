#include <iostream>
using namespace std;
#include <memory>

int main()
{
    int numOne = 1;
    int numTwo = 2;

    unique_ptr<int> ptrOne(new int(10));    
    *ptrOne = 10;
    *ptrOne = numOne;
    cout<<*ptrOne<<endl;
    
    return 0;
}//Release memory