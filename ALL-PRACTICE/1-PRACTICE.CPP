#include <fstream>
#include <iostream>
using namespace std;
#include "add-book.hpp"
#include "remove-book.hpp"
// PROJECT TITLE = LIBRARY MANAGEMENT SYSTEM

// ▶️      Functionality -
// 1. Adding, remove and updating book,
// 2. Managing patrons
// 3. borrowing and returning book
// 4. and generating reports.

// Main function
int main(void)
{
    int option;
    // Dashboard
    cout << "\tLIBRARY MANAGEMENT SYSTEM" << endl
         << endl;
    cout << "1. Add Book to Library" << endl;
    cout << "2. Remove Book from Library" << endl;
    cout << "3. Updating Book from Library" << endl;

    cout << endl
         << endl;
    //  do as per user selected functionality
    cout << "Enter your option : ";
    cin >> option;
    if (option == 1)
    {

        system("cls");
        addBook();
    }
    else if (option == 2)
    {
        removeBook();
    }
}