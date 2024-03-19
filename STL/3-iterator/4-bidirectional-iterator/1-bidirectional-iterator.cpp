#include <deque>
#include <iostream>
using namespace std;

int main(void)
{
    deque<int> numList = {10, 20, 30, 40, 50};
    deque<int>::iterator i=numList.end();

    while(i!=numList.begin()){
        cout<<*i<<endl;
        --i;
    }
}