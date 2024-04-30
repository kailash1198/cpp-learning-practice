#include <iostream>
#include <memory>
using namespace std;

int main()
{
    shared_ptr<int> ptrOne = make_shared<int>(1);

    weak_ptr<int> ptrTwo = ptrOne;

    if(auto shared = ptrTwo.lock()){
        cout<<"weakPtr is valid, use shared..."<<endl;
    }
    return 0;
}