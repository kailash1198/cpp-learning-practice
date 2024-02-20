#include <iostream>
using namespace std;

int main(void){
    int row=5;
    int colomn = 5;

    for(int i=0; i<row; i++){
        for(int j=5; j>=colomn; j--){
        cout<<" * ";
        }
         cout<<endl;
         colomn--;
    }
    
}