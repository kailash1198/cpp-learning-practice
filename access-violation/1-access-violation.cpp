#include <iostream>
using namespace std;
//Access violation - Access array which not exist. Or Derefrencing null pointer. Access freed memory.
int main(void){
    int array[5] = {1,2,3,4,5};

    int num = array[5]; //Trying to acess out of array bound 
    cout<<"num = "<<num<<endl;

    int* myPtr = nullptr;
    int accessPtr = *myPtr; //access violation because you trying to access null pointer
    cout<<accessPtr<<endl;
}