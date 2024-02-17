#include <iostream>
using namespace std;

int main(void)
{
    int rows = 5;  
    int space = 0; 
    int stars = 9; 


    for (int i = 0; i < rows; i++)
    {
        // Loop for spaces
        for (int j = 0; j < space; j++)
        {
            cout << "  "; // Double space for clarity
        }

        // Loop for stars
        for (int k = 0; k < stars; k++)
        {
            cout << "* ";
        }

        // Move to the next line
        cout << endl;

        // Adjust spaces and stars for the next row
        space += 2;
        stars -= 4;
    }
}