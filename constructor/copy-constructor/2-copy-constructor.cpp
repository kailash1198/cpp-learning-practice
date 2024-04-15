#include <iostream>
using namespace std;

class Book
{
private:
    string title;
    string author;

public:
    Book(string a, string b)
    {
        title = a;
        author = b;
    }
    Book(Book &obj)
    {
        title = obj.title;
        author = obj.author;
        cout << title << endl;
        cout << author << endl;
    }
};

int main()
{
    Book bookOne("Life good", "Kailash Kumar");
    Book bookTwo("Life Better", "Aryan Kumar");
    Book bookThree(bookOne);
    Book bookFour(bookTwo);

    Book bookFive(bookFour);

    return 0;
}