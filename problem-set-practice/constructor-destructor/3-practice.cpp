#include <iostream>
using namespace std;
// Write a class for a book with constructors and a destructor.
class Book
{
private:
    string name;
    string author;
    int ISBN;

public:
    Book(string a, string b, int c) : name(a), author(b), ISBN(c)
    {
        cout << name << " " << author << " " << ISBN << endl;
    };

    ~Book(){
        cout<<"Book delete"<<endl;
    }
};

int main()
{
    Book bookOne("Life", "Kailash", 123);
    return 0;
}