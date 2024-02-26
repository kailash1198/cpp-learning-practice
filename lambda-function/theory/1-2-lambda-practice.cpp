#include <iostream>
using namespace std;
//functor - function objects
//call object as a function using operator overloading method
//you have to use and overload: operator() with function.
//you do not need to give name while declaring functors in class

class baseClas{
    public:
    void operator()(){
        cout<<"This function call by object using functors working method"<<endl;
    }
};

int main(void)
{
    baseClas baseObj;
    //functor call
    baseObj();
    //alternatively you can also call using operator overloading
    baseObj.operator()();
}