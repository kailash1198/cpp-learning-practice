#include "add-book.hpp"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

// function for adding books in Library
void removeBook()
{
    bookDetails bookCodeDetails;
startAgain:
    int userCode;
    int foundCode;
    ifstream libraryFile("library.csv");

    cout << "Book Code : ";
    cin >> userCode;

}