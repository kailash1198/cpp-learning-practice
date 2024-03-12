#include "add-book.hpp"
#include <fstream>
#include <iostream>
using namespace std;

// function for adding books in Library
void removeBook()
{
    bookDetails bookCodeDetails;
startAgain:
    int userCode;
    ofstream libraryFile;
    libraryFile.open("library.csv", ios::app);

    cout << "Book Code : ";
    cin >> userCode;

    if (userCode == bookCodeDetails.bookCode)
    {
        
    }
}