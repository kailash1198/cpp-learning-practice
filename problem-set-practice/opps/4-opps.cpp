#include <iostream>
#include <string>
#include <vector>

// book class
class Book
{
private:
    std::string title;
    std::string author;
    bool checkedOut;

public:
    Book(std::string t, std::string a) : title(t), author(a), checkedOut(false) {}

    std::string getTitle() const
    {
        return title;
    }

    std::string getAuthor() const
    {
        return author;
    }

    bool isCheckedOut() const
    {
        return checkedOut;
    }

    void checkOut()
    {
        checkedOut = true;
    }

    void returnBook()
    {
        checkedOut = false;
    }
};

// member class
class Member
{
private:
    std::string name;
    std::vector<Book *> borrowedBooks;

public:
    Member(std::string n) : name(n) {}

    std::string getName() const
    {
        return name;
    }

    void borrowBook(Book *book)
    {
        borrowedBooks.push_back(book);
        book->checkOut();
    }

    void returnBook(Book *book)
    {
        for (auto it = borrowedBooks.begin(); it != borrowedBooks.end(); ++it)
        {
            if (*it == book)
            {
                borrowedBooks.erase(it);
                book->returnBook();
                break;
            }
        }
    }
};

// library class
class Library
{
private:
    std::vector<Book> books;
    std::vector<Member> members;

public:
    void addBook(const Book &book)
    {
        books.push_back(book);
    }

    void addMember(const Member &member)
    {
        members.push_back(member);
    }

    void displayAvailableBooks() const
    {
        std::cout << "Available Books:\n";
        for (const auto &book : books)
        {
            if (!book.isCheckedOut())
            {
                std::cout << book.getTitle() << " by " << book.getAuthor() << std::endl;
            }
        }
    }

    const std::vector<Book> &getBooks() const
    {
        return books;
    }

    const std::vector<Member> &getMembers() const
    {
        return members;
    }
};

// main function
int main()
{
    Library library;

    // Adding books to the library
    library.addBook(Book("The Great Gatsby", "F. Scott Fitzgerald"));
    library.addBook(Book("To Kill a Mockingbird", "Harper Lee"));
    library.addBook(Book("1984", "George Orwell"));

    // Adding members to the library
    library.addMember(Member("Alice"));
    library.addMember(Member("Bob"));

    // Displaying available books
    library.displayAvailableBooks();

    return 0;
}
