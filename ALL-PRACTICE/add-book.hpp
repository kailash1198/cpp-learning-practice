#include <fstream>
#include <iostream>
using namespace std;

class bookDetails
{
public:
    string title;
    string author;
    int bookCode;
};

// function for adding books in Library
void addBook()
{
startAgain:
    int addBookReEnterOption;
    ofstream libraryFile;
    libraryFile.open("library.csv", ios::app);
    bookDetails add;
    cout << "Book Title : ";
    cin >> add.title;
    libraryFile << add.title << ",";

    cout << "Book Author : ";
    cin >> add.author;
    libraryFile << add.author << ",";

    cout << "Book Code : ";
    cin >> add.bookCode;
    libraryFile << add.bookCode << endl;

    libraryFile.close();

    // Repeat for more entry
    cout << "Enter 1 for again enter and 0 for done : ";
    cin >> addBookReEnterOption;
    if (addBookReEnterOption == 1)
    {
        goto startAgain;
    }
    else if (addBookReEnterOption == 0)
    {
        exit(0);
    }
}