#include <fstream>
#include <iostream>
using namespace std;
// PROJECT TITLE = LIBRARY MANAGEMENT SYSTEM

// ▶️      Functionality -
// 1. Adding, remove and updating book,
// 2. Managing patrons
// 3. borrowing and returning book
// 4. and generating reports.

// CLASS DEFINITION CODE
class bookDetails
{
public:
    string title;
    string author;
    int bookCode;
};
// STRUCTURE DEFINITION CODE

// FUNCTION DEFINITION CODE
// function for adding books in Library
void addBook()
{
    ofstream libraryFile;
    libraryFile.open("library.txt");
    bookDetails add;
    cout << "Book Title : ";
    cin >> add.title;
    libraryFile << add.title << endl;

    cout << "Book Author : ";
    cin >> add.author;
    libraryFile << add.author << endl;

    cout << "Book Code : ";
    cin >> add.bookCode;
    libraryFile << add.bookCode << endl;

    libraryFile.close();
}

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

    // else
    // {
    //     exit(0);
    // }
}