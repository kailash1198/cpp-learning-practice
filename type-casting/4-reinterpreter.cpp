#include <iostream>
using namespace std;
//Reinterpret type casting - 
int main(void){
    int numOne = 10;

    int *numPtr = &numOne;

    char *charNewType = reinterpret_cast<char *>(numPtr);

    char nowTypeNew = *charNewType;//assign  here 
    cout<<sizeof(charNewType)<<endl;
    cout<<sizeof(nowTypeNew)<<endl;
}