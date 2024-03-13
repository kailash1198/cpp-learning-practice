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
    ofstream libraryFile;
    libraryFile.open("library.csv");

    cout << "Book Code : ";
    cin >> userCode;


   if(libraryFile.is_open()){
    
   }
}