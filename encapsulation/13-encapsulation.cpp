#include <iostream>
using namespace std;

// Create a class representing a LibraryBook with private member variables for book title, author, and publication year. Implement public member functions to set and get these attributes, display the details of the book, and check if it is an old book (published more than 20 years ago).

class libraryBook
{
private:
    string tittle;
    string author;
    int publicationYear;

public:
    // set data function
    void setData(string a, string b, int c)
    {
        tittle = a;
        author = b;
        publicationYear = c;
    }

    // get data function
    string getTitle()
    {
        return tittle;
    }

    string getAuthor()
    {
        return author;
    }

    int getYear()
    {
        return publicationYear;
    }

    // display data
    void displayData()
    {
        cout << "Title = " << tittle << endl;
        cout << "Author = " << author << endl;
        cout << "Publish Year = " << publicationYear << endl;
    }

    // how much old - check condition function
    void ageCheck()
    {
        if (publicationYear > 2020)
        {
            cout << "Book 20 years old" << endl;
        }
    }
};

int main(void)
{
    libraryBook bookOne;
    bookOne.setData("math", "kailash", 2023);
    bookOne.displayData();
    bookOne.ageCheck();
}