#include <iostream>
#include <vector>
using namespace std;
// Create a class for matrices and define a friend function to add two matrices.

class matrices
{
    vector<int> row;
    vector<int> colomn;

public:
    void matric_creation(int r, int c)
    {
        row.push_back(r);
        colomn.push_back(c);
    }

    friend void addMatrices(matrices &obj);
};

void addMatrices(matrices &obj){
    
}

int main(void)
{
    matrices matricesOne, matricesTwo;
    matricesOne.matric_creation(10, 20);
}