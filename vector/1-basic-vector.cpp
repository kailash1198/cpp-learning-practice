#include <iostream>
#include <vector>
using namespace std;
// Vector - Store element dyanamically with similar data types.
// The size of vector grpw dynamically


// Declaration and Initialization of vector
vector<int> numList = {1, 2, 3, 4, 5};


int main(void)
{
    for(const int &i: numList){
        cout<<i<<endl;
    }
}