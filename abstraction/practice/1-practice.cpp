#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;
// Abstraction practice
// lIBRARY MANAGEMENT SYSTEM - get books and return books
class library
{
private:
    string book_name;
    string author_name;
    int book_code;

public:
    void addBook()
    {
        string bookName;
        string authorName;
        int bookCode;
        cout << "Enter Book Name : ";
        getline(cin, bookName);
        cout << "Author Name : ";
        getline(cin, authorName);
        cout << "Book Code : ";
        cin >> bookCode;
        book_name = bookName;
        author_name = authorName;
        book_code = bookCode;
    }

    void removeBook(library &obj)
    {
        int code;
        cout << "Enter book code : ";
        cin >> code;
        if (code == obj.book_code)
        {
            library *newObj = new library();
            newObj = &obj;
            delete newObj;
        }
    }

    void displayBook(){
        cout<<book_name<<endl;
        cout<<author_name<<endl;
        cout<<book_code<<endl;
    }
};

int main(void)
{
    cout << "Library Maagement System" << endl
         << endl;

    library bookOne;
    bookOne.addBook();
    bookOne.removeBook(bookOne);
    bookOne.displayBook();
}