#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int findElement(int n, int key, vector<int> &arr){
    int element = arr[key];
    cout<<element<<endl;
}

int main(void)
{
    vector<int> myArray = {1, 2, 3, 4, 5};
    findElement(5, 2, myArray);
}