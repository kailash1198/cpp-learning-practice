#include <iostream>
#include <iterator>
#include <vector>

// Design classes for a library management system including Book, Member, and Library.
// Implement functionalities like checking out books, returning books, and displaying available books.

class library
{
private:
    int qty;
    std::vector<int> book_code;
    std::vector<std::string> book_name;
    std::vector<std::string> authorName;

public:
    void addBook()
    {
        std::cout << "Enter Qty : ";
        std::cin >> qty;

        for (int i = 0; i < qty; i++)
        {
            int code;
            std::string name;
            std::string auth_name;
            std::cout << "Enter book Code : ";
            std::cin >> code;
            std::cout << "Enter book Name : ";
            std::cin >> name;
            std::cout << "Enter book Author : ";
            std::cin >> auth_name;

            book_code.push_back(code);
            book_name.push_back(name);
            authorName.push_back(auth_name);
        }
    }

    void displayBook()
    {
        std::vector<int>::iterator code;
        std::vector<std::string>::iterator name;
        std::vector<std::string>::iterator authName;

        for (code = book_code.begin(); code < book_code.end(); code++)
        {
            std::cout << *code << " ";
            for (name = book_name.begin(); name < book_name.end(); name++)
            {
                std::cout << *name << " ";
                for (authName = authorName.begin(); authName < authorName.end(); authName++)
                {
                    // std::cout << *code << " ";
                    // std::cout << *name << " ";
                    std::cout << *authName << " ";
                    // std::cout << std::endl;
                }
                std::cout << std::endl;
                std::cout << std::endl;
            }
        }
    }
};

class book : public library
{
};

int main()
{
    library myLibrary;
    myLibrary.addBook();
    system("cls");
    myLibrary.displayBook();
    return 0;
}