#include <iostream>
using namespace std;
template <typename book_type>

void book_details(book_type bookName, book_type author, book_type code)
{
    cout << bookName << endl;
    cout << author << endl;
    cout << code << endl;
}

int main()
{
    book_details("Book Name", "Kailash", "1");
    return 0;
}