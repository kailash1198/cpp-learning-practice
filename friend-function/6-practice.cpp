#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

// Develop a class representing a 3D vector and implement a friend function to calculate the dot product of two vectors.

class ThreeDvector
{
private:
    vector<int> x_axis;
    vector<int> y_axis;
    vector<int> z_axis;

public:
    ThreeDvector(vector<int> a, vector<int> b, vector<int> c)
    {
        x_axis = a;
        y_axis = b;
        z_axis = c;
    }

    friend int sumOfVector(ThreeDvector objOne, ThreeDvector objTwo);
};

int sumOfVector(ThreeDvector objOne, ThreeDvector objTwo)
{
    int product_dotOne = objOne.x_axis * objTwo.x_axis;
    int product_dotTwo = objOne.y_axis * objTwo.y_axis;
    int product_dotThree = objOne.x_axis * objTwo.z_axis;

    int total = product_dotOne + product_dotTwo + product_dotThree;
    return total;
}

int main(void)
{
    ThreeDvector vector_one(1,2,3), vector_two(4,5,6);

    int totalResult = sumOfVector(vector_one, vector_two);
    cout<<totalResult<<endl;
}